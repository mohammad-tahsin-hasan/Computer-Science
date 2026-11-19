#include <bits/stdc++.h>
using namespace std;
int n, m;
int level[105][105];
char g[105][105];
bool vis[105][105];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool v(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}
void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] == true;
    level[si][sj] = 0;
    while (!q.empty()) {
        pair<int, int> p = q.front();
        int p_i = p.first;
        int p_j = p.second;
        cout << p_i << " " << p_j << "parent" << endl;
        for (int i = 0; i < 4; i++) {
            int ci = p_i + d[i].first;
            int cj = p_j + d[i].second;
            if (v(ci, cj) == true && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[p_i][p_j] + 1;
            }
        }
    }
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> g[i][j];

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(si, sj);
    cout << level[di][dj] << "destination" << endl;
    return 0;
}