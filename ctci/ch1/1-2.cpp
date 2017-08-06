#include <string>
#include <map>
using namespace std;
bool perm(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    map<char, int> chars;
    for (char c : s2) {
        if (chars.find(c) != chars.end())
            chars[c] = chars[c]+1;
        else
            chars.insert(make_pair(c, 1));
    }
    for (char c : s1) {
        if (chars.find(c) == chars.end())
            return false;
        else {
            chars[c] = chars[c]-1;
        }
    }
    for (auto c : chars) {
        if (c.second != 0)
            return false;
    }
    return true;
}
int main()
{
    string s1 = "hejjsa";
    string is_perm0 = "sajjee";
    string is_perm1 = "ejahjs";
    string is_perm2 = "akffj";
    printf("%d\n", perm(s1, is_perm0));
    printf("%d\n", perm(s1, is_perm1));
    printf("%d\n", perm(s1, is_perm2));
}
