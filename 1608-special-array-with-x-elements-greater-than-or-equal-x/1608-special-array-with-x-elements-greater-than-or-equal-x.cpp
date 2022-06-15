class Solution {
public:
    int specialArray(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int t = nums[n-1];
        for(int i=1;i<=t;i++)
        {
            int  f=0,l=n-1,m;
            while(f<l)
            {
                m=(f+l)/2;
                if(nums[m] >= i)
                    l=m;
                else
                    f=m+1;
            }
            if((n-l) == i)
                return i;
        }
        return -1;
    }
};