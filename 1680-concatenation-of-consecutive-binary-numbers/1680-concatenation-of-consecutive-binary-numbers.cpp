class Solution {
public:
    int concatenatedBinary(int n) 
    {
        // int M=1e9+7,l=0;
        // long ans=0;
        // for (int i=1; i<=n;i++) 
        // {
        //     if ((i&(i-1))==0) 
        //         l+=1;
        //     ans=((ans<<l)|i)% M;
        // }
        // return ans;
        long ans=1,len=4;
        for(int i=2;i<=n;i++) 
        {
            if (i==len) 
                len*=2;
            ans=(ans*len+i)%1000000007;
        }
        return ans;
    }
};