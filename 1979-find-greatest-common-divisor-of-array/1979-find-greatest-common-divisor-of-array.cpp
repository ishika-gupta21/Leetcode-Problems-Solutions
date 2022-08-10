class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int min=INT_MAX,max=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
                max=nums[i];
            if(nums[i]<min)
                min=nums[i];
        }
        int gcd=0;
        for(int i=1;i<=min;i++)
        {
            if(min%i==0 && max%i==0)
                gcd=i;
        }
        return gcd;
    }
};