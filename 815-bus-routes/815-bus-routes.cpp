#define MAX 1000001
#define pb push_back
class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int S, int T) 
    {
        int v = routes.size();
        if(S == T) return 0;
        vector<int> adj[v];
        vector<int> stops(MAX,-1);
        for(int i = 0; i<v; i++)
        {
            for(int j = 0; j<routes[i].size(); j++)
            {
                int x = routes[i][j];
                if(stops[x] != -1) 
                {
                    int f = stops[x];
                    int s = i;
                    adj[f].pb(s);
                    adj[s].pb(f);
                }
                stops[x] = i;
            }
            if(stops[S] == stops[T] && stops[S]!= -1)
                return 1;
        }
        vector<bool> visited(v);
        queue<pair<int,int>> pq;
        int start = stops[S];
        if(start == -1) return -1;
        int target = stops[T];
        if(target == -1) return -1;
        pq.push({start,1});
        visited[start] = true;
        while(!pq.empty())
        {
            int curr = pq.front().first;
            int trips = pq.front().second;
            if(curr == target) return trips;
            pq.pop();
            for(auto it : adj[curr])
            {
                if(!visited[it])
                {
                    visited[it] = true;
                    pq.push({it,trips+1});
                }
            }
        }
        return -1;
    }
};