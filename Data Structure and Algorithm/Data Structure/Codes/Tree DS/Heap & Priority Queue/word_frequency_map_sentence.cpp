#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int t = 0; t < T; ++t) {
        string S;
        getline(cin, S);
        vector<string> v;
        stringstream ss(S);
        string w;

        while (ss >> w)
            v.push_back(w);

        map<string, pair<int, int>> m;
        for (int i = 0; i < v.size(); i++) {
            m[v[i]].first++;
            m[v[i]].second = i;
        }

        string d = "";
        int l = 0;
        int f = 0;

        for (auto it = m.begin(); it != m.end(); it++) {
            if (l < it->second.first || (l == it->second.first && it->second.second < f)) {
                d = it->first;
                l = it->second.first;
                f = it->second.second;
            }
        }

        cout << d << " " << l << endl;
}
}