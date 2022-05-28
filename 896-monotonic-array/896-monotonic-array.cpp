class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int n = nums.size();
        int c1 = 0;
        int c2 = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] >= nums[i-1]) 
            {
                c1++;
            }
            
            if (nums[i] <= nums[i-1])
            {
                c2++;
            }
        }         
        return (n == c1 + 1 || n == c2 + 1);
    }
};