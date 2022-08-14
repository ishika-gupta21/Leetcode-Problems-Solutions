class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums)
    {
        if(nums.size() < 3)
            return 0;
        int cnt = 0;
        int store = 0;
        int prev_diff = nums[1] - nums[0];
        for(int i=1; i<nums.size() - 1; i++)
        {
            int curr_diff = nums[i+1] - nums[i];
            if(curr_diff == prev_diff)
                cnt++;
            else
            {
                prev_diff = curr_diff;
                cnt = 0;
            }
            
            store+=cnt;
        }
        return store;
    }
};