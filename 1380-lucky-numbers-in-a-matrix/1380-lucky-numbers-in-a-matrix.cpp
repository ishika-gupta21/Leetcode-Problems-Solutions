class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        for(int i = 0; i < matrix.size(); i++) 
        {
            int minidx = 0;
            for(int j = 0; j < matrix[0].size(); j++)
                if(matrix[i][minidx] > matrix[i][j])
                    minidx = j;
            int maxele = matrix[0][minidx];
            for(int j = 0; j < matrix.size(); j++)
                if(matrix[j][minidx] > maxele)
                    maxele = matrix[j][minidx];
            if(maxele == matrix[i][minidx])
                ans.push_back(maxele);
        }
        return ans;
    }
};