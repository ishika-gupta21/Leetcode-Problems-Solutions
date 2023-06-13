class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        for(int i=0;i<grid.size();i++)
            mp[grid[i]]++;
        
        int col=0;
        int cnt=0;
        while(col<grid[0].size()){
            vector<int>colvec;
            for(int row=0;row<grid.size();row++){
                colvec.push_back(grid[row][col]);
            }
            if(mp[colvec]){
                cnt+=mp[colvec];
            }
            col++;
        }
        return cnt;
    }
};