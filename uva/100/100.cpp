#include <iostream>
#include <sstream>

int algo(int n)
{
    int cycle = 1;

    while (n != 1)
    {
        if (n%2 == 1) {
            n = 3*n + 1;
        } else {
            n = n/2;
        }
    
        cycle++;
    }   

    return cycle;
}

int main()
{
    std::string inp;
    while (std::getline(std::cin, inp))
    {
        int max_cycle = 1;
        std::istringstream is(inp);
        int i, j;
        is >> i >> j; 

        for (int n = std::min(i, j); n <= std::max(i, j); n++)
        {
            max_cycle = std::max(algo(n), max_cycle); 
        }

        std::cout << i << " " << j << " " << max_cycle << std::endl;
    }
}

