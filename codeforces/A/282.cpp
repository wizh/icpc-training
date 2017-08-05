#include <string>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    string inp;
    int N, ans = 0;
    scanf("%d", &N);
    while (N--) {
        cin >> inp;
        if (inp[0] == '+' || inp[2] == '+')
            ans++;
        else
            ans--;
    }
    printf("%d\n", ans);
}
