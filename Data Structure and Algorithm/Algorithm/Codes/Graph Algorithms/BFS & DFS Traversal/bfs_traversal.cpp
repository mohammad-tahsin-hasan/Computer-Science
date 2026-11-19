#include <bits/stdc++.h>
using namespace std;
vector<int> a_list[1005];
bool vis[1005];
void bfs(int s) {
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        cout << p << " ";
        for (int c : a_list[p]) {
            if (vis[c] == false) {
                q.push(c);
                vis[c] = true;
            }
        }
    }
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
    bfs(0);

    return 0;
}