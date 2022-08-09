class Solution {
public:
    int getMaxLen(vector<int>& nums) 
    {
        int max_len=0,n=nums.size(),count=0;
        int i=0,short_i=0,j=0;
        while(j<n)
        {
            if(nums[j]!=0) 
            {
                if(nums[j]<0)
                {
                    count++;
                        if(count==1)
                            short_i=j+1;
                }
                j++;
                if(count%2==0)
                    max_len=max(max_len,j-i);
                else
                    max_len=max(max_len,j-short_i);
            }
            else if(nums[j]==0)
            {
                i=short_i=j+1;
                j++;
                count=0;
            }       
        }       
        return max_len;
    }
};