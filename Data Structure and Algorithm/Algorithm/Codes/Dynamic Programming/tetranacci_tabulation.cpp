#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hackEdges;
    cin >> hackEdges;

    if (hackEdges == 0) 
    {
        cout << 0 << endl;            //tahsin hasan
        return 0;
    }
    if (hackEdges == 1 || hackEdges == 2) 
    {
        cout << 1 << endl;
        return 0;
    }
    if (hackEdges == 3) 
    {
        cout << 2 << endl;
        return 0;
    }

    vector<int> hackMemo(hackEdges + 1);
    hackMemo[0] = 0;
    hackMemo[1] = 1;
    hackMemo[2] = 1;
    hackMemo[3] = 2;

    for (int hackNodes = 4; hackNodes <= hackEdges; hackNodes++) 
    {
        hackMemo[hackNodes] = hackMemo[hackNodes - 1] + hackMemo[hackNodes - 2] + hackMemo[hackNodes - 3] + hackMemo[hackNodes - 4];
    }

    cout << hackMemo[hackEdges] << endl;
    return 0;
}
