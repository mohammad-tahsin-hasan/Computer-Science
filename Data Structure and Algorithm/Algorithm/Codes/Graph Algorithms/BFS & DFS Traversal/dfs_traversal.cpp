#include <bits/stdc++.h>
using namespace std;
vector<int> t[1005];
bool vis[1005];
void dfs(int src){
    cout<<src<<" ";
    vis[src]=true;
    for(int child: t[src]){
        if(vis[child]==false)
        dfs(child);
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    while (e--) {
        int a, b;
        cin >> a >> b;
        t[a].push_back(b);
        t[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}