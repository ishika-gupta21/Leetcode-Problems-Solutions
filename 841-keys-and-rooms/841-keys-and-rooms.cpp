class Solution {
public:
    void dfs(int keys,vector<vector<int>>& rooms, vector<int>&vis)
    {
        vis[keys] = 1;
        for(auto it:rooms[keys])
        {
           if(vis[it]==0)
                dfs(it,rooms,vis);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        int n = rooms.size();
        vector<int>vis(n,0);
        dfs(0,rooms,vis);
        for(auto it:vis)
        {
            if(it==0)
                return false;
        }
        return true;
    }
};