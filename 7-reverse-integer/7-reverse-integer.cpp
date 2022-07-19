class Solution {
public:
    int reverse(int x)
    {
        long long int ret =0;
        int k = abs(x);
        while(k>0)
        {
            ret = ret*10 + k%10;
            k = k/10;
        }
        if(x<0)
            ret = -1*ret;
        if(ret>INT_MAX || ret<INT_MIN) 
            return 0;
        return ret;
    }
};