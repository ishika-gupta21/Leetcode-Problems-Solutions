class Solution {
public:
    int minDistance(string word1, string word2) 
    {
        int m=word1.length(),n=word2.length();
		int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
            dp[i][0]=0;
          for(int i=0;i<=n;i++)
            dp[0][i]=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],max(dp[i][j-1],dp[i-1][j-1]));
            }
        }
        int sum = (m- dp[m][n])+(n-dp[m][n]);
                return sum;
    }
};