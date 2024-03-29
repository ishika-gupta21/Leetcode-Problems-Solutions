class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) 
    {
        vector<int> ans;
        vector<int> indeg(n,0);
        for(auto i:edges)  
            indeg[i[1]]++;
        for(int i=0;i<indeg.size();i++)  
            if(indeg[i]==0) 
                ans.push_back(i);
        return ans;        
    }
};