#include <bits/stdc++.h>

using namespace std;
const int hackSize = 1e3 + 5;
char hackGrid[hackSize][hackSize];
bool hackVisited[hackSize][hackSize];

vector<pair<int, int>> hackMoves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int hackRows, hackCols;

bool hackValid(int hackX, int hackY) {
    return !(hackX < 0 || hackX >= hackRows || hackY < 0 || hackY >= hackCols || hackGrid[hackX][hackY] == '#' || hackVisited[hackX][hackY]);
}

void hackDFS(int hackX, int hackY) {
    hackVisited[hackX][hackY] = true;

    for (int i = 0; i < 4; i++) {
        int hackNextX = hackX + hackMoves[i].first;
        int hackNextY = hackY + hackMoves[i].second;
        if (hackValid(hackNextX, hackNextY)) hackDFS(hackNextX, hackNextY);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // tahsin hasan
    cin >> hackRows >> hackCols;
    for (int hackX = 0; hackX < hackRows; hackX++) {
        for (int hackY = 0; hackY < hackCols; hackY++)
            cin >> hackGrid[hackX][hackY];
    }
    memset(hackVisited, false, sizeof(hackVisited));

    int hackCount = 0;
    for (int hackX = 0; hackX < hackRows; hackX++) {
        for (int hackY = 0; hackY < hackCols; hackY++)
            if (hackValid(hackX, hackY)) {
                hackCount++;
                hackDFS(hackX, hackY);
            }
    }
    cout << hackCount << endl;

    return 0;
}
