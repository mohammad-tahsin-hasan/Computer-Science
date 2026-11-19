#include <bits/stdc++.h>
using namespace std;
vector<int> a_list[1005];
bool vis[1005];
int level[1005];
void srtest_distance(int s) {
    queue<int> q;
    q.push(s);
    vis[s] = true;
    level[s] = 0;
    while (!q.empty()) {
        int p = q.front();
        q.pop();

        for (int c : a_list[p]) {
            if (vis[c] == false) {
                q.push(c);
                vis[c] = true;
                level[c] = level[p] + 1;
            }
        }
    }
    cout << endl;
}
int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;
        a_list[a].push_back(b);
        a_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int src, dst;
    cin >> src >> dst;
    srtest_distance(src);
    // for (int i = 0; i < n; i++) {
    //     cout << i << " ->" << level[i] << endl;
    // }
    cout << level[dst];

    return 0;
}