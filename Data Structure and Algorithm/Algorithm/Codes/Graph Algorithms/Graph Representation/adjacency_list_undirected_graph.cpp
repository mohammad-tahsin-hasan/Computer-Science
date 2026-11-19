#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, e;
    cin >> n >> e;
    vector<int> list[n];    // called array of vector 
    while (e--) {
        int a,b;
        cin>>a,b;
        list[a].push_back(b);
          list[b].push_back(a);  // this line is used for undirected graph  
    
    }
    for(int i=0;i<n;i++){
        cout<<i<<" -> "; 
        for(int x: list[i]){
            cout<<x<<" ";

        }
        cout<<endl;
    }

    return 0;
}