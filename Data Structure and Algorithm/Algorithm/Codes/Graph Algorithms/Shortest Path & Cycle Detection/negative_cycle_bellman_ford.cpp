#include <bits/stdc++.h>
using namespace std;

class HackEdge 
{
   public:
    int hackFrom, hackTo;
    long long hackCost;
    HackEdge(int hackFrom, int hackTo, long long hackCost) : hackFrom(hackFrom), hackTo(hackTo), hackCost(hackCost) {}
};

int hackSource;

bool hackCmp(HackEdge a, HackEdge b) 
{
    if (a.hackFrom == hackSource || b.hackFrom == hackSource)
        return (abs(a.hackFrom - hackSource) < abs(b.hackFrom - hackSource));
    else
        return (a.hackCost < b.hackCost);
}

const int hackLimit = 2e3 + 5;

class HackSolver 
{
   public:
    int hackNodes, hackEdges;
    vector<HackEdge> hackGraph;
    long long hackDist[hackLimit];
    bool hackUpdated = true;

    void hackBellmanFord() 
    {
        hackUpdated = false;
        for (HackEdge hE : hackGraph)
            if (hackDist[hE.hackFrom] < LONG_LONG_MAX && hackDist[hE.hackFrom] + hE.hackCost < hackDist[hE.hackTo]) 
            {
                hackUpdated = true;
                hackDist[hE.hackTo] = hackDist[hE.hackFrom] + hE.hackCost;
            }
    }

    void hackSolve() 
    {
        fill(hackDist, hackDist + hackLimit, LONG_LONG_MAX);

        cin >> hackNodes >> hackEdges;
        int hackFrom, hackTo;
        long long hackCost;
        while (hackEdges--) 
        {
            cin >> hackFrom >> hackTo >> hackCost;
            hackGraph.push_back(HackEdge(hackFrom - 1, hackTo - 1, hackCost));
        }

        cin >> hackSource;
        hackSource--;
        sort(hackGraph.begin(), hackGraph.end(), hackCmp);
        hackDist[hackSource] = 0;

        for (int i = 0; i < hackNodes && hackUpdated; i++)
            hackBellmanFord();

        if (hackUpdated) 
        {
            cout << "Negative Cycle Detected";
            return;
        }

        int hackQueries, hackDest;             //tahsin hasan
        cin >> hackQueries;
        while (hackQueries--) 
        {
            cin >> hackDest;
            hackDest--;
            if (hackDist[hackDest] == LONG_LONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << hackDist[hackDest] << endl;
            }
        }
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
