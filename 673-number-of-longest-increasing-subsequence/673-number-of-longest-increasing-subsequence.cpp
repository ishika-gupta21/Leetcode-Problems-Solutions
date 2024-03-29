class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) 
    {
        int n = nums.size(), cnt = 0, len = 0;
        vector<pair<int, int>> lis(n);
        for(int i=n-1; i>=0; i--)
        {
            int maxLen = 1, maxCnt = 1;
            for(int j=i+1; j<n; j++)
            {
                if(nums[j] > nums[i])
                {
                    int l = lis[j].first, c = lis[j].second;
                    if(l+1 > maxLen) maxLen = l+1, maxCnt = c;
                    else if(l+1 == maxLen) maxCnt += c;
                }
            }
            if(maxLen > len) 
                len = maxLen, cnt = maxCnt;
            else if
                (maxLen == len) cnt += maxCnt;
            lis[i] = {maxLen, maxCnt};
        }
        return cnt;
    }
};