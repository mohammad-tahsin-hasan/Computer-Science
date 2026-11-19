#include <bits/stdc++.h>

using namespace std;
int hackTarget;
const int hackLimit = 1e5 + 5;
int hackDP[hackLimit];

bool hackDPFunction(int hackValue) {
    if (hackValue == hackTarget)
        return true;
    if (hackValue > hackTarget)
        return false;
    if (hackDP[hackValue] != -1)
        return (bool)hackDP[hackValue];

    if (hackDPFunction(hackValue * 2)) return (bool)(hackDP[hackValue] = (int)true);
    if (hackDPFunction(hackValue + 3)) return (bool)(hackDP[hackValue] = (int)true);  // tahsin hasan

    return (bool)(hackDP[hackValue] = (int)false);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hackQueries;
    cin >> hackQueries;
    while (hackQueries--) {
        memset(hackDP, -1, sizeof(hackDP));
        cin >> hackTarget;
        cout << (hackDPFunction(1) ? "YES" : "NO") << endl;
    }

    return 0;
}
