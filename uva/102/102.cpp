#include <iostream>
#include <sstream>

int smallest(double vals[], int size)
{
    int index = 0;

    for(int i = 1; i < size; i++)
    {
        if (vals[i] < vals[index])
            index = i;
    }

    return index;
}

int main()
{
    std::string inp;
    while (std::getline(std::cin, inp))
    {
        std::istringstream is(inp);

        int b1, g1, c1,
            b2, g2, c2,
            b3, g3, c3;

        is >> b1 >> g1 >> c1 >>
              b2 >> g2 >> c2 >>
              b3 >> g3 >> c3;

        int BGC, BCG, GBC, GCB, CBG, CGB;
        BGC = b2 + b3 + g1 + g3 + c1 + c2;
        BCG = b2 + b3 + c1 + c3 + g1 + g2;
        GBC = g2 + g3 + b1 + b3 + c1 + c2;
        GCB = g2 + g3 + c1 + c3 + b1 + b2;
        CBG = c2 + c3 + b1 + b3 + g1 + g2;
        CGB = c2 + c3 + g1 + g3 + b1 + b2;

        std::string names[] = {"BGC", "BCG", "GBC", "GCB", "CBG", "CGB"};
        int vals[] = {BGC, BCG, GBC, GCB, CBG, CGB};

        std::cout << inp << names[smallest(vals, 6)] <<
                     std::min(BGC, BCG, GBC, GCB, CBG, CGB);
    }
}