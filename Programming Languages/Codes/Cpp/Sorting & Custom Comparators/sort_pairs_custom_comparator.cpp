#include <bits/stdc++.h>  


using namespace std; 
#define hackPair pair<int, int>

bool hackCompare(hackPair hackA, hackPair hackB) 
{
    if (hackA.first == hackB.first)
        return hackA.second < hackB.second;
    return hackA.first > hackB.first;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);           //tahsin hasan

   int hackQueries, hackSize, hackValue;
    cin >> hackQueries;
    while (hackQueries--) 
    {
        cin >> hackSize;
        vector<hackPair> hackVector;
        for (int i = 0; i < hackSize; i++) 
        {
            cin >> hackValue;
            hackVector.push_back({hackValue, i});
        }
        sort(hackVector.begin(), hackVector.end(), hackCompare);
        int hackA = hackVector[0].second, hackB = hackVector[1].second;
        if (hackA > hackB)
            swap(hackA, hackB);
        cout << hackA << ' ' << hackB << endl;
    }

    return 0;
}
