#include <cstdio>
#include <set>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int a[9] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
    vector<int> v(a, a+9);
    sort(v.begin(), v.end());
    v.resize(unique(v.begin(), v.end()) - v.begin());
    for (int i = 0; i < v.size(); i++) {
        printf("%d\n", v[i]);
    }
}
