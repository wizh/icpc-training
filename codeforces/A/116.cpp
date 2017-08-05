#include <cstdio>
using namespace std;
int main()
{
    int N, a, b, ans = 0, max = 0;
    scanf("%d", &N);
    while (N--) {
        scanf("%d %d", &a, &b);
        ans = ans - a + b;
        if (ans > max)
            max = ans;
    }
    printf("%d\n", max);
}
