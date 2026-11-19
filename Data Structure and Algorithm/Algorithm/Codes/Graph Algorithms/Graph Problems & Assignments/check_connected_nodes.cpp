#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hackNodes, hackEdges;
    cin >> hackNodes >> hackEdges;
    // tahsin hasan
    vector<vector<int>> hack(hackNodes + 5);

    int hackFrom, hackTo;
    while (hackEdges--) {
        cin >> hackFrom >> hackTo;
        hack[hackFrom].push_back(hackTo);
    }

    int hackQueries;
    cin >> hackQueries;
    while (hackQueries--) {
        cin >> hackFrom >> hackTo;
        if (hackFrom == hackTo) {
            cout << "YES" << endl;
            continue;
        }

        bool hackFound = false;
        for (int hackNext : hack[hackFrom]) {
            if (hackNext == hackTo) {
                hackFound = true;
                break;
            }
        }

        cout << (hackFound ? "YES" : "NO") << endl;
    }

    return 0;
}
