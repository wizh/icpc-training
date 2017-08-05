#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, temp, total = 0;
    scanf("%d", &N);
    int groups[5] = {0};
    while (N--) {
        scanf("%d", &temp);
        ++groups[temp];
    }
    // groups of 4
    total += groups[4];
    // groups of 3
    total += groups[3];
    groups[1] -= groups[3];
    // groups of 2
    total += ceil((double)groups[2]/2.0);
    groups[1] -= (groups[2]%2)*2;
    // groups of 1
    if (groups[1] > 0)
        total += ceil(double(groups[1]) / 4.0);

    printf("%d\n", total);
}
