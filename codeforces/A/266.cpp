#include <string>
#include <cstdio>
using namespace std;
int main()
{
    int N, ans = 0;
    int n_copy = N;
    scanf("%d", &N);
    char prev = 'a', c;
    while (N--+1) {
        scanf("%c", &c);
        if (N<n_copy-1 && c == prev)
            ans++;
        else
            prev = c;
    }
    printf("%d\n", ans);
}
