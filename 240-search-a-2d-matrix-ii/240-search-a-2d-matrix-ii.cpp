class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        int r=0;
        int c=n-1;
        while(r<m && c>=0 && c<n)
        {
            if(matrix[r][c]>target)
                c--;
            else if(matrix[r][c]<target)
                r++;
            else if(matrix[r][c]==target)
                return true;
        }
        return false;
    }
};