class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat)
    {
        vector<int> r;
        int dir=1;
        int i=0,j=0;
        while (i<mat.size() and j<mat[0].size())
        {
            r.push_back(mat[i][j]);
            if (dir) 
            {
                if (i==0 || j==mat[0].size()-1) 
                {
                    dir=0;
                    j!=mat[0].size()-1?j++:i++;
                    continue;
                }
                i--;
                j++;
            }
            else 
            {
                if (j==0 or i==mat.size()-1) 
                {
                    dir=1;
                    i!=mat.size()-1?i++:j++;
                    continue;
                }
                i++;
                j--;
            }
        }
        return r;
    }
};