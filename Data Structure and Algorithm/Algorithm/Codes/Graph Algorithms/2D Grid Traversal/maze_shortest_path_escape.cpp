#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
char hackGrid[N][N];
int hackPar[N][N][2];
bool hackVis[N][N];
int hackRows, hackCols, hackStartRow = -1, hackStartCol, hackDestRow = -1, hackDestCol;
bool hackFound = false;

vector<pair<int, int>> hackDirs = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool hackValid(int i, int j) {
    return !(i < 0 || i >= hackRows || j < 0 || j >= hackCols || hackGrid[i][j] == '#' || hackVis[i][j]);
}

void hackBfs() {
    hackVis[hackStartRow][hackStartCol] = true;
    queue<pair<int, int>> hackQueue;
    hackQueue.push({hackStartRow, hackStartCol});

    while (!hackQueue.empty()) {
        pair<int, int> hackPair = hackQueue.front();
        hackQueue.pop();

        if (hackPair.first == hackDestRow && hackPair.second == hackDestCol) {
            hackFound = true;
            break;
        }  // tahsin hasan

        for (int i = 0; i < 4; i++) {
            int hackNewRow = hackPair.first + hackDirs[i].first;
            int hackNewCol = hackPair.second + hackDirs[i].second;
            if (hackValid(hackNewRow, hackNewCol)) {
                hackVis[hackNewRow][hackNewCol] = true;
                hackQueue.push({hackNewRow, hackNewCol});
                hackPar[hackNewRow][hackNewCol][0] = hackPair.first;
                hackPar[hackNewRow][hackNewCol][1] = hackPair.second;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> hackRows >> hackCols;
    for (int i = 0; i < hackRows; i++) {
        for (int j = 0; j < hackCols; j++)
            cin >> hackGrid[i][j];
    }
    memset(hackVis, false, sizeof(hackVis));
    memset(hackPar, -1, sizeof(hackPar));

    for (int i = 0; i < hackRows && (hackStartRow == -1 || hackDestRow == -1); i++)
        for (int j = 0; j < hackCols && (hackStartRow == -1 || hackDestRow == -1); j++)
            if (hackGrid[i][j] == 'R')
                hackStartRow = i, hackStartCol = j;
            else if (hackGrid[i][j] == 'D')
                hackDestRow = i, hackDestCol = j;

    hackBfs();

    if (hackFound) {
        vector<char> hackPath;
        pair<int, int> hackCurr = {hackDestRow, hackDestCol};
        while (true) {
            hackCurr = {hackPar[hackCurr.first][hackCurr.second][0], hackPar[hackCurr.first][hackCurr.second][1]};
            if (hackCurr == make_pair(hackStartRow, hackStartCol))
                break;
            hackGrid[hackCurr.first][hackCurr.second] = 'X';
        }
    }

    for (int i = 0; i < hackRows; i++) {
        for (int j = 0; j < hackCols; j++)
            cout << hackGrid[i][j];
        cout << endl;
    }

    return 0;
}
