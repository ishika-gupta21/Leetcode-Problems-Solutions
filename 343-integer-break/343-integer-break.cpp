class Solution {
public:
    int integerBreak(int n) 
    {
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        if(n==4)
            return 4;
        vector<int>dp(n+1,0);
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        dp[4]=4;
        for(int i=5;i<=n;i++)
        {
            for(int j=1;j<i;j++)
                dp[i]= max(dp[i],dp[j]*dp[i-j]);
        }
        return dp[n];
    }
};