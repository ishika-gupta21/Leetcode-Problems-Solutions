class Solution {
public:
    bool isThree(int n) 
    {
        int c=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
                c++;
        }
        c++;
        return c==3;
    }
};