#include <iostream>
#include <vector>
#include <map>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers;
    map<char, int> mapping = {{'A', 2}, {'B', 2}, {'C', 2},
                              {'D', 3}, {'E', 3}, {'F', 3},
                              {'G', 4}, {'H', 4}, {'I', 4},
                              {'J', 5}, {'K', 5}, {'L', 5},
                              {'M', 6}, {'N', 6}, {'O', 6},
                              {'P', 7}, {'R', 7}, {'S', 7},
                              {'T', 8}, {'U', 8}, {'V', 8},
                              {'W', 9}, {'X', 9}, {'Y', 9}};

    string tmp;

    while (cin >> tmp)
    {
        for (char& c : tmp)
        {
            cout << tmp;
        }
    }

    return 0;
}