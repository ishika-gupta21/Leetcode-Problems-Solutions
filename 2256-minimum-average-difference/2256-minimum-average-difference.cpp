class Solution {
public:
    int minimumAverageDifference(vector<int>& nums)
    {
        int res = 0, min_diff = 10e6;
        long long avg1 = 0, avg2 = 0;
        for (auto& elem : nums)
            avg1 += elem;
        for (int i = 0; i < nums.size(); i++) 
        {
            avg1 -= nums[i];
            avg2 += nums[i];
            int diff = abs((int) (avg1 / max(1, (int) nums.size() - 1 - i)) - (int) (avg2 / (i + 1)));
            if (diff < min_diff)
            {
                min_diff = diff;
                res = i;
            }
        }                   
        return res;
    }
};