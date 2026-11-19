#include <bits/stdc++.h>  


using namespace std;  

const int maxN = 1005, maxW = 1005;
int dp[maxN][maxN];

int knapsack(int n, int weight[], int value[], int W) {
    if (n == 0 || W == 0)
        return 0;

    if (dp[n][W] != -1)
        return dp[n][W];

    int op1 = 0;
    if (W >= weight[n - 1])
        op1 = knapsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
    int op2 = knapsack(n - 1, weight, value, W);
    return dp[n][W] = max(op1, op2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int q;
    cin >> q;
    while (q--) {
        int n, W;
        cin >> n >> W;
        memset(dp, -1, sizeof(dp));

        int weight[n], value[n];

        for (int i = 0; i < n; i++)
            cin >> weight[i];
        for (int i = 0; i < n; i++)
            cin >> value[i];

        cout << knapsack(n, weight, value, W) << endl;
    }

    return 0;
}
