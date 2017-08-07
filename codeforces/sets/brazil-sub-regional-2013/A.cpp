#include <cstdio>
using namespace std;
int main()
{
    int a, b, c;
    char winner = '0';
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0 && b == 1 && c == 1 ||
        a == 1 && b == 0 && c == 0)
        winner = 'A';
    if (a == 1 && b == 0 && c == 1 ||
        a == 0 && b == 1 && c == 0)
        winner = 'B';
    if (a == 1 && b == 1 && c == 0 ||
        a == 0 && b == 0 && c == 1)
        winner = 'C';
    if (winner != '0')
        printf("%c\n", winner);
    else
        printf("*\n");
}
