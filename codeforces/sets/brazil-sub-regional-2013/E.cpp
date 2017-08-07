#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int N, R, temp;
    scanf("%d %d", &N, &R);
    set<int> returned, died;
    while (R--) {
        scanf("%d", &temp);
        returned.insert(temp);
    }
    for (int i=1; i<=N; i++) {
        if (returned.find(i)==returned.end())
            died.insert(i);
    }

    for (int person : died)
        printf("%d ", person);
    if (died.size() == 0)
        printf("*");
    printf("\n");
}
