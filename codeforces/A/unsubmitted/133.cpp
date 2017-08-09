#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    string in;
    cin >> in;
    bool ans = false;
    for (auto c : in) {
        if (c == 'H' || c == 'Q' || c == '9' || c == '+') {
            ans = true;
            break;
        }
    }
    if (ans)
        printf("YES\n");
    else
        printf("NO\n");
}
