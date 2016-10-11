#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers;
    map<char, int> mapping = {{'A', '2'}, {'B', '2'}, {'C', '2'},
                              {'D', '3'}, {'E', '3'}, {'F', '3'},
                              {'G', '4'}, {'H', '4'}, {'I', '4'},
                              {'J', '5'}, {'K', '5'}, {'L', '5'},
                              {'M', '6'}, {'N', '6'}, {'O', '6'},
                              {'P', '7'}, {'R', '7'}, {'S', '7'},
                              {'T', '8'}, {'U', '8'}, {'V', '8'},
                              {'W', '9'}, {'X', '9'}, {'Y', '9'}};

    map<std::string, int> occurences;
    std::string tmp;
    
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        tmp.erase(std::remove(tmp.begin(), tmp.end(), '-'), tmp.end());
        std::string number;

        for (char c : tmp)
        {
            if (isdigit(c)) {
                number += c;
            } else {
                number += mapping.find(c)->second;
            }
        }

        number.insert(3, 1, '-');

        if (occurences.find(number) != occurences.end()) {
            occurences[number] += 1;
        } else {
            occurences.insert(make_pair(number, 1));
        }
    }

    for (auto occurence : occurences)
    {
        if (occurence.second > 1) {
            cout << occurence.first << " " << occurence.second << endl;
        }
    }

    return 0;
}
