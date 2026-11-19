#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        string S, X;
        cin >> S >> X;

        int cnt = 0;

        for (int i = 0; X[i] != '\0'; i++) {
            cnt++;
        }

        size_t p = 0;

        while (true) {
            p = S.find(X, p);

            if (p + cnt > S.size()) break;

            S.replace(p, cnt, "#");

            p += 1;
        }

        cout << S << endl;
    }

    return 0;
}
