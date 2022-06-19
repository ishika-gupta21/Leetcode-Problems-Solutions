class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int sum = 0;
        int pre = 0;
        for(auto x:nums)                                     
        {
            sum+=x;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(sum - pre - nums[i] == pre)
                return i;
            pre+=nums[i];
        }
        return -1;      
    }
};