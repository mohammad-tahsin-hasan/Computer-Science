#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, f;
    cin >> n;
    while (n != 0) {
        int k = n % 10;
        if (f == k) {
            cout << "Yes";  // tahsin hasan
            return 0;
        }
        f = k;
        n = n / 10;
    }
    cout << "No";
    return 0;
}