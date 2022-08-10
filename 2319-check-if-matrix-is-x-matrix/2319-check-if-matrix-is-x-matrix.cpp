class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) 
    {
        for (int row = 0; row < grid.size(); ++row)
        {
            if (grid[row][row] == 0 || grid[row][grid.size() - row - 1] == 0) 
                return false;
            for (int i = 0; i < grid[row].size(); ++i)
            {
                if (i != row && i != grid.size() - row - 1 && grid[row][i] != 0)
                    return false;
            }
        }
        return true;
    }
};