#include <bits/stdc++.h>  

using namespace std;  
const int hackN = 1e6 + 5;
class HackSolver 
{
   public:
    int hackParent[hackN];
    int hackLevel[hackN];
    int hackCycle = 0;

    void hackDSUInit(int hackNodes) 
    {
        memset(hackParent, -1, hackNodes * sizeof(int));
        memset(hackLevel, 0, hackNodes * sizeof(int));
    }

    int hackDSUFind(int hackNode) 
    {
        if (hackParent[hackNode] == -1)
            return hackNode;
        return hackParent[hackNode] = hackDSUFind(hackParent[hackNode]);
    }

    void hackDSUUnionLevel(int hackA, int hackB) 
    {
        hackA = hackDSUFind(hackA);
        hackB = hackDSUFind(hackB);

        if (hackA == hackB) 
        {
            hackCycle++;
        } else if (hackLevel[hackA] > hackLevel[hackB])
            hackParent[hackB] = hackA;
        else if (hackLevel[hackA] < hackLevel[hackB])
            hackParent[hackA] = hackB;
        else 
        {
            hackParent[hackA] = hackB;
            hackLevel[hackB]++;
        }
    }

    void hackSolve() 
    {
        int hackNodes, hackEdges;
        cin >> hackNodes >> hackEdges;

        hackDSUInit(hackNodes);
        int hackFrom, hackTo;
        while (hackEdges--) 
        {
            cin >> hackFrom >> hackTo;
            hackDSUUnionLevel(hackFrom - 1, hackTo - 1);
        }
        cout << hackCycle;
    }
};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    HackSolver *hackSol = new HackSolver();
    hackSol->hackSolve();

    return 0;
}
