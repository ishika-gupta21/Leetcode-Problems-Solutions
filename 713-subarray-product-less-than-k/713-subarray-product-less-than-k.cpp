class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int counter = 0;
        if (k <= 1)
            return counter;
        int i1 = 0;
        int prod = 1;
        for (int i2 = 0; i2 < nums.size(); ++i2) 
        {
            prod *= nums[i2];
            while (prod >= k) 
            {
                prod /= nums[i1];
                ++i1;
            }

            counter += i2 - i1 + 1;
        }
        return counter;
    }
};