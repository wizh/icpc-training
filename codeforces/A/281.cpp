#include <string>
#include <iostream>
using namespace std;
int main ()
{
    string inp;
    cin >> inp;
    inp[0] = toupper(inp[0]);
    printf("%s\n", inp.c_str());
}
