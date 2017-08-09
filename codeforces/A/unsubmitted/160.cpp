#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{
    int N,temp,ans;
    scanf("%d", &temp);
    vector<int> coins;
    while (N--) {
        scanf("%d", &temp);
        coins.push_back(temp);
    }
    sort(coins.rbegin(), coins.rend());
    int coins_left = 0;
    for (auto coin : coins) {
        coins_left += coin;
    }
    while (ans < coins_left) {
        ans += coins[0];
        resize(coins.begin(), coins.end());
    }
    printf("%d", ans);
}
