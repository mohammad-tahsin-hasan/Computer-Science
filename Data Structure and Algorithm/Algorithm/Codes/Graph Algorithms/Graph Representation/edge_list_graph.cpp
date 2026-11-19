#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edge;
    while (e--) {
        int a, b;
        cin >> a >> b;
        edge.push_back({a, b});
    }
    for (pair<int, int> p : edge) {  // (auto p:edge) as condition
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}