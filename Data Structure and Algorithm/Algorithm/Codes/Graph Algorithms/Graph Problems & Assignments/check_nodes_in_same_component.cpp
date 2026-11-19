#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 5;

class Solution {
   public:
    int hackNodes, hackEdges, hackDestRow, hackDestCol;
    char hackGrid[N][N];
    bool hackVisited[N][N];
    vector<pair<int, int>> hackDirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool hackPathFound = false;

    bool hackValid(int i, int j) {
        return !(i < 0 || i >= hackNodes || j < 0 || j >= hackEdges || hackVisited[i][j] || hackGrid[i][j] == '-');
    }

    void hackDfs(int hackStartRow, int hackStartCol) {
        if (hackStartRow == hackDestRow && hackStartCol == hackDestCol) {
            hackPathFound = true;
            return;
        }
        hackVisited[hackStartRow][hackStartCol] = true;

        for (int i = 0; i < 4; i++) {
            int hackNewRow = hackStartRow + hackDirs[i].first;
            int hackNewCol = hackStartCol + hackDirs[i].second;
            if (hackValid(hackNewRow, hackNewCol))
                hackDfs(hackNewRow, hackNewCol);
        }
    }

    void hackSolve() {
        memset(hackVisited, false, sizeof(hackVisited));

        cin >> hackNodes >> hackEdges;

        for (int i = 0; i < hackNodes; i++)
            for (int j = 0; j < hackEdges; j++)
                cin >> hackGrid[i][j];

        int hackStartRow, hackStartCol;
        cin >> hackStartRow >> hackStartCol >> hackDestRow >> hackDestCol;
        hackDfs(hackStartRow, hackStartCol);

        cout << (hackPathFound ? "YES" : "NO");  // tahsin hasan
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution *hackSolution = new Solution();
    hackSolution->hackSolve();

    return 0;
}
