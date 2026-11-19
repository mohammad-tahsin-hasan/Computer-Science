#include <bits/stdc++.h>

using namespace std;

const int hackMaxN = 1005, hackMaxW = 1005;
int hackDP[hackMaxN][hackMaxW];

int hackKnapsack(int hackN, int hackWeight[], int hackValue[], int hackW) {
    if (hackN == 0 || hackW == 0)
        return 0;

    if (hackDP[hackN][hackW] != -1)
        return hackDP[hackN][hackW];

    int hackOp1 = 0;
    if (hackW >= hackWeight[hackN - 1])
        hackOp1 = hackKnapsack(hackN - 1, hackWeight, hackValue, hackW - hackWeight[hackN - 1]) + hackValue[hackN - 1];

    int hackOp2 = hackKnapsack(hackN - 1, hackWeight, hackValue, hackW);

    return hackDP[hackN][hackW] = max(hackOp1, hackOp2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hackQ;
    cin >> hackQ;
    while (hackQ--) {
        int hackN, hackW;
        cin >> hackN >> hackW;
        memset(hackDP, -1, sizeof(hackDP));

        int hackWeight[hackN], hackValue[hackN];

        for (int i = 0; i < hackN; i++)
            cin >> hackWeight[i];
        for (int i = 0; i < hackN; i++)
            cin >> hackValue[i];

        cout << hackKnapsack(hackN, hackWeight, hackValue, hackW) << endl;
    }

    return 0;
}
