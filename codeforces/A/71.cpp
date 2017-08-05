#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int N;
    scanf("%d", &N);
    while (N--) {
        string word;
        cin >> word;
        if (word.length() > 10)
            printf("%c%d%c\n", word[0], (int)(word.length()-2), word[word.length()-1]);
        else
            printf("%s\n", word.c_str());
    }
}
