#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hackNodes, hackEdges;
    cin >> hackNodes >> hackEdges;

    vector<priority_queue<int>> hack(hackNodes + 5);

    int hackFrom, hackTo;
    while (hackEdges--) {
        cin >> hackFrom >> hackTo;
        hack[hackFrom].push(hackTo);
        hack[hackTo].push(hackFrom);
    }

    int hackQueries;
    cin >> hackQueries;  // tahsin hasan
    while (hackQueries--) {
        cin >> hackFrom;
        if (hack[hackFrom].empty())
            cout << -1;
        else {
            while (!hack[hackFrom].empty()) {
                cout << hack[hackFrom].top() << ' ';
                hack[hackFrom].pop();
            }
        }
        cout << endl;
    }

    return 0;
}
