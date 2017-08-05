#include <cstdio>
using namespace std;
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (m%2 == 1 && n%2 == 1)
        printf("%d\n", (n*m-1)/2);
    else
        printf("%d\n", m*n/2);
}
