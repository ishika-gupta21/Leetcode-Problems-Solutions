class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        int n = nums.size();
        if(n<3) 
            return 0;
        int i = INT_MAX;
        int j = INT_MAX;
        for(int index=0;index<n;index++) 
        {
            if(nums[index]<=i) 
                i = nums[index];
            else if(nums[index]<=j)
                j = nums[index];
            else 
                return 1;
        }
        return 0;
    }
};