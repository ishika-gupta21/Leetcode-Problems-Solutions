class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> ans(n,vector<int>(n));
		int cnt = 1;
		int sRow = 0;
		int eRow = n - 1;
		int sCol = 0;
		int eCol = n - 1;
		while(cnt <= n*n)
        {
			if(cnt <= n*n)
            {
				for(int i = sCol; i <= eCol; i++)
                {
					ans[sRow][i] = cnt;
					cnt++;
				}
			}
			sRow++;
			if(cnt <= n*n)
            {
				for(int i = sRow; i <= eRow; i++)
                {
					ans[i][eCol] = cnt;
					cnt++;
				}
			}
			eCol--;
			if(cnt <= n*n)
            {
				for(int i = eCol; i >= sCol; i--)
                {
					ans[eRow][i] = cnt;
					cnt++;
				}
			}
			eRow--;
			if(cnt <= n*n)
            {
				for(int i = eRow; i >= sRow; i--)
                {
					 ans[i][sCol] = cnt;
					 cnt++;
				}
			}
			sCol++;
		}
		return ans;
    }
};