class Solution {
public:
    int getMaxLen(vector<int>& nums) 
    {
        int lz=-1,maxi=0, n=nums.size(),nn=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                lz=i;
                nn=0;
            }
            if(nums[i]<0) 
                nn++;
            if(nn%2==0)
            {
                if(lz==-1)
                    maxi=max(maxi,i+1);
                else
                    maxi=max(maxi, i-lz);
            }
        }
        lz=-1; nn=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==0)
            {
                lz=i; 
                nn=0;
            }
            if(nums[i]<0)
                nn++;
            if(nn%2==0)
            {
                if(lz==-1) 
                    maxi=max(maxi,n-i); 
                else 
                    maxi=max(maxi, lz-i);
            }
        }
        return maxi;
    }
};