#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int N, group_size, ans = 0;
    scanf("%d", &N);
    int groups[4] = {0, 0, 0, 0};
    while (N--) {
        scanf("%d", &group_size);
        ++groups[group_size-1];
    }
    // groups of 4
    ans += groups[3];
    // groups of 2
    if (groups[1] % 2 == 0) {
        ans += groups[1] / 2;
        groups[1] = 0;
    } else {
        ans += (groups[1]-1) / 2;
        groups[1] = 1;
    }
    // groups of 3 and 1
    while (groups[0] && groups[2]) {
        groups[0] -= 1;
        groups[2] -= 1;
        ans += 1;
    }
    if (groups[0] > 0) {
        if (groups[1] == 1) {
            if (groups[0] == 1)
                ans += 1;
            else
                ans += (int)ceil((double)(groups[0]-2)/ 4.0)+1;
        } else {
            ans += (int)ceil((double)groups[0] / 4.0);
        }
    } else {
        ans += groups[2] + groups[1];
    }

    printf("%d\n", ans);
}
