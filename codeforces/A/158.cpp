#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    int N, k, ans = 0;
    scanf("%d %d", &N, &k);
    vector<int> ns;
    while (N--) {
        int a;
        scanf("%d", &a);
        ns.push_back(a);
    }
    int k_score = ns[k-1];
    for (int i=0; i<ns.size(); i++) {
        if (ns[i] <= 0 || ns[i] < k_score)
            break;
        ans += 1;
    }
    printf("%d\n", ans);
}
