#include <iostream>
#include <set>
using namespace std;
int main()
{
    string username;
    cin >> username;

    set<int> distinct;
    for (char c : username)
        distinct.insert(c);
    if (distinct.size() % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}
