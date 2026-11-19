#include<bits/stdc++.h>
using namespace std;
 int n,m;
char g[105][105];
bool vis[105][105];
vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
bool v(int i,int j){
if(i<0||i>=n||j<0||j>=m)
  return false;

  return true;
}
void dfs(int si,int sj){
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    for(int i=0;i<4;i++){
        int ci,cj;
        ci=si+d[i].first;
        cj=sj+d[i].second;
        if(v(ci,cj)==true&&!vis[ci][cj])
           dfs(ci,cj);

        cout<<ci<<" "<<cj<<endl;
    }
}
int main()
{     
   
    cin>>n>>m;
    for(int i=0;i<n;i++)
       for(int j=0;j<m;j++)
         cin>>g[i][j];
     
    int si,sj;
    cin>>si>>sj;
      memset(vis, false, sizeof(vis));
dfs(si,sj);
      
       
     return 0;
}