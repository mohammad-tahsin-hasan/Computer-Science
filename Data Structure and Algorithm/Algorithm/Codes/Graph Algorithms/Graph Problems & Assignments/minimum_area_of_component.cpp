#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
char hackGrid[N][N];
bool hackVisited[N][N];

vector<pair<int, int>> hackDirs = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int hackRows, hackCols;
vector<int> hackCounts;

bool hackValid(int i, int j) {
    return !(i < 0 || i >= hackRows || j < 0 || j >= hackCols || hackGrid[i][j] == '-');
}

void hackDfs(int hackStartRow, int hackStartCol) {
    hackCounts.back()++;
    hackVisited[hackStartRow][hackStartCol] = true;

    for (int i = 0; i < 4; i++) {
        int hackNewRow = hackStartRow + hackDirs[i].first;
        int hackNewCol = hackStartCol + hackDirs[i].second;

        if (hackValid(hackNewRow, hackNewCol) && !hackVisited[hackNewRow][hackNewCol])
            hackDfs(hackNewRow, hackNewCol);
    }
}

bool hackEmpty() {
    for (int i = 0; i < hackRows; i++)
        for (int j = 0; j < hackCols; j++)
            if (hackGrid[i][j] == '.')
                return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> hackRows >> hackCols;
    for (int i = 0; i < hackRows; i++)
        for (int j = 0; j < hackCols; j++)
            cin >> hackGrid[i][j];

    if (hackEmpty())  // tahsin hasan
    {
        cout << -1;
        return 0;
    }

    memset(hackVisited, false, sizeof(hackVisited));

    for (int i = 0; i < hackRows; i++)
        for (int j = 0; j < hackCols; j++)
            if (hackGrid[i][j] == '.' && !hackVisited[i][j]) {
                hackCounts.push_back(0);
                hackDfs(i, j);
            }

    sort(hackCounts.begin(), hackCounts.end());
    cout << hackCounts.front();

    return 0;
}
