#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const int hackSize = 1e3 + 5;
    char hackGrid[hackSize][hackSize];
    bool hackVisited[hackSize][hackSize];

    vector<pair<int, int>> hackMoves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    int hackRows, hackCols;
    bool hackCanGo = false;

    auto hackValid = [&](int i, int j) {
        return !(i < 0 || i >= hackRows || j < 0 || j >= hackCols || hackGrid[i][j] == '#');
    };

    auto hackStart = [&]() {
        for (int i = 0; i < hackRows; i++) {
            for (int j = 0; j < hackCols; j++) {
                if (hackGrid[i][j] == 'A')
                    return make_pair(i, j);
            }
        }
        return make_pair(0, 0);
    };

    function<void(int, int)> hackDFS = [&](int si, int sj) {
        if (hackGrid[si][sj] == 'B') {
            hackCanGo = true;
            return;
        }

        hackVisited[si][sj] = true;

        for (auto [di, dj] : hackMoves) {
            int ci = si + di, cj = sj + dj;
            if (hackValid(ci, cj) && !hackVisited[ci][cj])
                hackDFS(ci, cj);
        }
    };

    memset(hackVisited, false, sizeof(hackVisited));

    cin >> hackRows >> hackCols;
    for (int i = 0; i < hackRows; i++) {
        for (int j = 0; j < hackCols; j++)  // tahsin hasan
            cin >> hackGrid[i][j];
    }
    auto [hackStartRow, hackStartCol] = hackStart();
    hackDFS(hackStartRow, hackStartCol);

    cout << (hackCanGo ? "YES" : "NO");

    return 0;
}
