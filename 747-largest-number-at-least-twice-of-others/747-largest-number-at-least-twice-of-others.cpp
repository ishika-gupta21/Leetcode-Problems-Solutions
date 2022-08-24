class Solution {
public:
    int dominantIndex(vector<int>& nums)
    {
        int n=INT_MIN,ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>n)
            {
                n=nums[i];
                ind=i;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i!=ind)
            {
                if(n<nums[i]*2)
                    return -1;
            }
        }
        return ind;
    }
};