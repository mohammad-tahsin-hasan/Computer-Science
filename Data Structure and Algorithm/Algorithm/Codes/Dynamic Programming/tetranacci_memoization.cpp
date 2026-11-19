#include <bits/stdc++.h>

using namespace std;

vector<int> hackMemo(31, -1);

int hackTetranacci(int hackNodes) {
    if (hackNodes == 0) return 0;
    if (hackNodes == 1 || hackNodes == 2) return 1;
    if (hackNodes == 3) return 2;

    if (hackMemo[hackNodes] != -1) return hackMemo[hackNodes];

    hackMemo[hackNodes] = hackTetranacci(hackNodes - 1) + hackTetranacci(hackNodes - 2) +
                          hackTetranacci(hackNodes - 3) + hackTetranacci(hackNodes - 4);
    return hackMemo[hackNodes];  // tahsin hasan
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hackEdges;
    cin >> hackEdges;

    cout << hackTetranacci(hackEdges) << endl;
    return 0;
}
