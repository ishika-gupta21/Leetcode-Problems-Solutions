class Solution {
public:
    void dfs(int i, int n, vector<vector<int>>&isConnected, vector<bool> &vis)
    {
        vis[i] = true;
        vector<int> adj;
        for(int k=0; k<n; k++)
        {
            int x = isConnected[i][k];
            if(x == 1)
                adj.push_back(k);
        }
        for(auto it:adj)
        {
            if(!vis[it])
                dfs(it, n, isConnected, vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        vector<bool> vis(n, false);
        int count = 0;
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i, n, isConnected, vis);
            }
        }
        return count;
    }
};