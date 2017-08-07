#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string in;
    cin >> in;
    int conseq = 0;
    char last = in[0];
    bool dang = false;
    for (char c : in) {
        if (c == last)
            conseq++;
        else {
            last = c;
            conseq = 1;
        }
        if (conseq == 7)
            dang = true;
    }
    if (dang)
        printf("YES\n");
    else
        printf("NO\n");
}
