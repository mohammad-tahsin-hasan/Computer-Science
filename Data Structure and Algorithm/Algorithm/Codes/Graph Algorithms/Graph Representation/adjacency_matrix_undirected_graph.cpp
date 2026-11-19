#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                mat[i][j] = 1;

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a, b;
        mat[a][b] = 1;
        mat[b][a] = 1;  // this line used for undirected graph only
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " " << endl;
        }
    }
    return 0;
}