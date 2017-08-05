#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>

char VOCALS[6] = { 'a', 'o', 'y', 'e', 'u', 'i'};
using namespace std;
int main()
{
    string inp, ans;
    cin >> inp;
    transform(inp.begin(), inp.end(), inp.begin(), ::tolower);
    for (auto e : inp) {
        bool is_vocal = false;
        for (auto vocal : VOCALS) {
            if (e == vocal)
                is_vocal = true;
        }
        if (!is_vocal) {
            ostringstream ss;
            ss << "." << e;
            ans += ss.str();
        }
    }
    printf("%s\n", ans.c_str());
}
