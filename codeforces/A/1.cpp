#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n, m, a, ans;
    scanf("%lf %lf %lf", &n, &m, &a);
    ans = ceil(n/a) * ceil(m/a);
    printf("%.0f\n", ans);
}
