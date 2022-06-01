class Solution {
public:
    int xorOperation(int n, int start)
    {
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        {
            nums[i]=start+ 2*i;
        }
        int c=nums[0];
        for(int i=1;i<n;i++)
        {
            c=c^nums[i];
        }
        return c;
    }
};