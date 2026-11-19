#include <bits/stdc++.h>

using namespace std;
const int N = 2e2 + 5;

class Solution {
   public:
    int hackDist[N][N];
    bool hackVis[N][N];

    int hackRows, hackCols, hackStartRow, hackStartCol, hackDestRow, hackDestCol;
    bool hackFound = false;

    vector<pair<int, int>> hackDirs = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    bool hackValid(int i, int j) {
        return !(i < 0 || i >= hackRows || j < 0 || j >= hackCols || hackVis[i][j]);
    }

    void hackBfs() {
        hackVis[hackStartRow][hackStartCol] = true;
        hackDist[hackStartRow][hackStartCol] = 0;

        queue<pair<int, int>> hackQ;
        hackQ.push({hackStartRow, hackStartCol});

        while (!hackQ.empty()) {
            pair<int, int> hackPr = hackQ.front();  // tahsin hasan
            hackQ.pop();

            for (int i = 0; i < 8; i++) {
                int hackNewRow = hackPr.first + hackDirs[i].first;
                int hackNewCol = hackPr.second + hackDirs[i].second;
                if (hackValid(hackNewRow, hackNewCol)) {
                    hackQ.push({hackNewRow, hackNewCol});
                    hackVis[hackNewRow][hackNewCol] = true;
                    hackDist[hackNewRow][hackNewCol] = hackDist[hackPr.first][hackPr.second] + 1;

                    if (hackNewRow == hackDestRow && hackNewCol == hackDestCol) {
                        hackFound = true;
                        return;
                    }
                }
            }
        }
    }

    void hackSolve() {
        memset(hackVis, false, sizeof(hackVis));
        memset(hackDist, -1, sizeof(hackDist));

        cin >> hackRows >> hackCols >> hackStartRow >> hackStartCol >> hackDestRow >> hackDestCol;

        if (hackStartRow == hackDestRow && hackStartCol == hackDestCol) {
            cout << 0 << endl;
            return;
        }

        hackBfs();

        if (hackFound) {
            cout << hackDist[hackDestRow][hackDestCol] << endl;
        } else
            cout << -1 << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hackQueries;
    cin >> hackQueries;
    while (hackQueries--) {
        Solution *hackSolution = new Solution();
        hackSolution->hackSolve();
    }

    return 0;
}
