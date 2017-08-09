#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    string in;
    cin >> in;
    int needed = 0;
    for (auto c : in) {
        if (c == "hello"[needed]) {
            needed++;
        }
        if (needed == 5)
           break;
    }
    if (needed == 5) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
