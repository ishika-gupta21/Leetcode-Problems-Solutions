class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int ans=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i])
                count++;
            else
                count=0;
            if(count>ans)
                ans=count;
        }
        return ans;
    }
};