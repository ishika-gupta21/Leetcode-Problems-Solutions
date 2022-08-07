class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int size = nums.size();
        vector<int> dp(size, 10000000);
        dp[size-1] = 0;
        for(int i = size-2; i>=0; i--)
        {
            for(int j=1;j<=nums[i]; j++)
            {
                if(i+j>size-1)
                    break;
                dp[i] = min(dp[i], dp[i+j]+1);
            }
        }
        return dp[0];
    }
};