class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter)     {
        map<int,vector<vector<int>>>m;
        vector<vector<int>>v;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
                m[abs(rCenter-i)+abs(cCenter-j)].push_back({i,j});
        }
        for(auto it:m)
        {
            for(auto it1:it.second)
                v.push_back(it1);
        }
        return v;
    }
};