#include <cstdio>
using namespace std;
int main()
{
    int N, a, b, c, ans = 0;
    scanf("%d", &N);
    while (N--) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
            ans += 1;
    }
    printf("%d\n", ans);
}
