class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        /*int ans=0;
        while(n)
        {
            n&=n-1;
            ans++;
        }                     
       return ans;*/
        int c=0;
        while(n>0)
        {
            c+=(n&1);
            n>>=1;
        }
        return c;
    }
};