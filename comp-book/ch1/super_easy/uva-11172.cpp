#include <cstdio>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
int main()
{
    int N;
    scanf("%d", &N);
    vector<tuple<int, int>> is;
    while (N--) {
        int a, b;
        scanf("%d %d", &a, &b);
        is.push_back(make_pair(a, b));

    }
    for (int i=0; i < is.size(); i++) {
        string ans;
        int a, b;
        a = is[i].first();
        b = is[i].second();
        if (a > b) {
            ans = ">";
        } else if (a < b) {
            ans = "<";
        } else {
            ans = "=";
        }
        printf("%s\n", ans.c_str());
    }
}
