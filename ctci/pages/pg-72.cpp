#include <set>
#include <map>
#include <cstdio>
#include <vector>
using namespace std;

// O(1) space, O(n) time
int numInCommon(vector<int> first, vector<int> second)
{
    int inCommon = 0, index = 0;
    for (auto e : first ) {
        for (int i=index; i<second.size(); i++) {
            index = i;
            if (second[i] > e)
                break;
            if (second[i] == e)
                inCommon += 1;
        }
    }
    return inCommon;
}

// O(n) space, O(n) time
int numInCommon2(vector<int> first, vector<int> second)
{
    int inCommon = 0;
    set<int> s;
    for (auto e : first)
        s.insert(e);
    for (auto e : second) {
        if (s.find(e) != s.end())
            inCommon += 1;
    }
    return inCommon;
}

int main()
{
    vector<int> first = { 2, 3, 4};
    vector<int> second = { 1, 3, 4, 5, 28 };
    int inCommon = numInCommon2(first, second);
    printf("%d\n", inCommon);
}
