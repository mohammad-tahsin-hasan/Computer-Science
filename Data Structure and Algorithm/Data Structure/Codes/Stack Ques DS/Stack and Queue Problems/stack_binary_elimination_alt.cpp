#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read t before the loop
    
    while (t--) {
        string s;
        cin >> s;  // Read string inside the loop
        stack<char> st;  // Change to char stack
        
        for (char c : s) {
            if (st.empty()) {
                st.push(c);
            }
            else if ((st.top() == '1' && c == '0') || (st.top() == '0' && c == '1')) {
                st.pop();
            }
            else {
                st.push(c);
            }
        }
        
        cout << (st.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}