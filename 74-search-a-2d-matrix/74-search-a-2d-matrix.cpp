class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int r = matrix.size(), c = matrix[0].size(), i = 0, j = c - 1;
        while (i < r && j > -1) 
        {
            if (matrix[i][j] == target) 
                return true;
            if (target > matrix[i][j]) 
                i++;
            else
                j--;
        }
        return false;
    }
};