class Solution {
public:
    int numTrees(int n)
    {
        int64_t dp = 1;
        for(int i = 1; i < n ; i++)
        {
            dp = (dp << 1) * (2 * i + 1)/(i + 2);
        }
    return dp;
    }
};