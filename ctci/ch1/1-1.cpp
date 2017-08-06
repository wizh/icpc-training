#include <string>
#include <set>
using namespace std;
bool uniqueChars(string s)
{
    if (s.length() == 0)
        return true;
    char first = s[0];
    for (char c : s) {
        if (c != first)
            return false;
    }
    return true;
}

// with hashset
bool uniqueChars2(string s)
{
    set<int> chars;
    for (char s : s)
        chars.insert(s);
    return chars.size() <= 1;
}

int main()
{
    string unique = "aaaaaaaa";
    string edge_case = "";
    string not_unique = "bbbbbba";
    string not_unique2 = "abcbdbbbb";
    printf("%d", uniqueChars2(unique));
    printf("%d", uniqueChars2(edge_case));
    printf("%d", uniqueChars2(not_unique));
    printf("%d\n", uniqueChars2(not_unique2));
}
