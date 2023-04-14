class Solution {
public:
    int longestPalindromeSubseq(string s) 
    {
        int n = s.size(), ans = 0;
        vector<int> dp(n, 1);
        for (int i = 1; i < n; i++) 
        {
            int len = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                int temp = dp[j];
                if (s[j] == s[i])
                    dp[j] = len + 2;
                len = max(len, temp);
            }
        }
        for (auto i : dp)
            ans = max(ans, i);
        return ans;
    }
};