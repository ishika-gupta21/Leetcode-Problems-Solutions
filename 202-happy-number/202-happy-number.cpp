class Solution {
public:
    bool isHappy(int n) 
    {
        int s;
        if(n<=9)
            n=n*n;
        while(n>9)
        {
            s=0;
            while(n>0)
            {
                int d=n%10;
                s+=d*d;
                n=n/10;
            }
            n=s;
        }
        if(n==1||n==7)
            return true;
        else
            return false;
    }
};