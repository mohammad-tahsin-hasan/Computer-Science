#include <bits/stdc++.h>

using namespace std;

bool areAnagrams(string hackString1, string hackString2) {
    if (hackString1.length() != hackString2.length()) return false;
    sort(hackString1.begin(), hackString1.end());
    sort(hackString2.begin(), hackString2.end());
    return hackString1 == hackString2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hackTestCases;
    cin >> hackTestCases;
    while (hackTestCases--) {
        string hackString1, hackString2;
        cin >> hackString1 >> hackString2;
        cout << (areAnagrams(hackString1, hackString2) ? "YES" : "NO") << endl;
    }
    return 0;
}
