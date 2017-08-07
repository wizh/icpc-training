#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int temp, pos_row, pos_col;
    for (int i=1; i <= 5; i++) {
        for (int j=1; j <= 5; j++) {
            scanf("%d", &temp);
            if (temp == 1) {
                pos_row = i;
                pos_col = j;
                break;
            }
        }
    }
    int res = abs(3-pos_row) + abs(3-pos_col);
    printf("%d\n", res);
}
