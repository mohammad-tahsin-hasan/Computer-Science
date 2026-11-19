#include <bits/stdc++.h>  

typedef long long ll; 
using namespace std;  

class HackSolver 
{
   public:
    int hackNodes, hackEdges;

    ll hackAdd(ll a, ll b) {
        return a == LONG_LONG_MAX || b == LONG_LONG_MAX || (a > 0 && b > 0 && a > LONG_LONG_MAX - b) ? LONG_LONG_MAX : a + b;
    }

    void hackSolve() 
    {
        cin >> hackNodes >> hackEdges;
        ll hackGraph[hackNodes][hackNodes];
        for (int i = 0; i < hackNodes; i++)
        {
            for (int j = 0; j < hackNodes; j++)
                hackGraph[i][j] = i == j ? 0 : LONG_LONG_MAX;
        }
        int hackFrom, hackTo;
        ll hackCost;
        while (hackEdges--) 
        {
            cin >> hackFrom >> hackTo >> hackCost;
            hackGraph[hackFrom - 1][hackTo - 1] = min(hackCost, hackGraph[hackFrom - 1][hackTo - 1]);
        }

        for (int k = 0; k < hackNodes; k++)
        {
            for (int i = 0; i < hackNodes; i++)
                for (int j = 0; j < hackNodes; j++)
                    if (hackAdd(hackGraph[i][k], hackGraph[k][j]) < hackGraph[i][j])
                        hackGraph[i][j] = hackAdd(hackGraph[i][k], hackGraph[k][j]);
        }
        int hackQueries;
        cin >> hackQueries;
        while (hackQueries--) 
        {
            cin >> hackFrom >> hackTo;
            cout << (hackGraph[hackFrom - 1][hackTo - 1] == LONG_LONG_MAX ? -1 : hackGraph[hackFrom - 1][hackTo - 1]) << endl;
        }
    }
};                    //tahsin hasan

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    HackSolver *hackSol = new HackSolver();
    hackSol->hackSolve();

    return 0;
}
