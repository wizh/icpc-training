#include <cstdio>
#include <string>
using namespace std;
bool isLucky(int n)
{
    string num = to_string(n);
    for (char c : num) {
        if (c != '4' && c != '7')
            return false;
    }
    return true;
}

int main()
{
    int n; scanf("%d", &n);
    bool almostLucky = false;
    for (int i=n; i>1; i--) {
        if (!isLucky(i))
            continue;
        if (n % i == 0)
            almostLucky = true;
    }
    if (almostLucky)
        printf("YES\n");
    else
        printf("NO\n");
}
