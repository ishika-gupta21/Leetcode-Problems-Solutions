class Solution {

    int dfs(int sv, vector<vector<int>>& adj, vector<bool>& vis)
    {
        vis[sv] = true; 
        int count = 0; 
        for(auto it: adj[sv]){
            if(!vis[it]){
                count += dfs(it, adj, vis); 
            }
        }
        return count + 1; 
    }
    
public:
    long long countPairs(int n, vector<vector<int>>& edges) 
    {
        long long ans = 0, sum = 0;
        vector<vector<int> > adj(n); 
        for(auto it: edges){
            adj[it[0]].push_back(it[1]); 
            adj[it[1]].push_back(it[0]);
        } 
        vector<bool> vis(n,false); 
        for(int i=0; i<n; i++){
            if(!vis[i]) {
                int temp = dfs(i, adj, vis); 
                ans += temp*sum; 
                sum += temp; 
            }
        }

        return ans; 
    }
};