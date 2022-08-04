class Solution {
public:
    int fib(int n) 
    {
        int dp[2] = {0, 1};
        for (int i = 2; i <= n; ++i)
            dp[i%2] += dp[(i+1)%2];
        return dp[n%2];
    }
};