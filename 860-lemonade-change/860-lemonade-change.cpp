class Solution {
public:
    bool lemonadeChange(vector<int>& nums)
    {
        int five=0,ten=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==5)
            {
                five++;
                continue;
            }
            if(nums[i]==10)
            {
                if(five>0)
                {
                    ten++;
                    five--;
                }
                else
                    return false;
            }
            if(nums[i]==20)
            {
                if(five>0 && ten>0)
                {
                    five--;
                    ten--;
                }
                else if(five>=3)
                    five-=3;
                else
                    return false;
            }
        }
        return true;
    }
};