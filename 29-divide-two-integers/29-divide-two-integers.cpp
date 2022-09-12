class Solution {
public:
    int divide(int dividend, int divisor)
    {
        int c=0;
        bool f=false;
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if(dividend == INT_MIN && divisor == 1)
            return INT_MIN;
        if(dividend==INT_MIN || divisor==INT_MIN)
            return dividend/divisor;
        if(divisor==1)
            return dividend;
        if(divisor==-1)
            return -dividend;
        if(divisor>0 && dividend<0)
        {
            f=true;
            dividend*=-1;
        }
        if(divisor<0 && dividend>0)
        {
            f=true;
            divisor*=-1;
        }
        if(divisor<0 && dividend<0)
        {
            divisor=divisor*-1;
            dividend=dividend*-1;
        }
        while(dividend>=divisor)
        {
            dividend-=divisor;
            c++;
        }
        if(f==true)
            c*=-1;
        return c;
    }
};