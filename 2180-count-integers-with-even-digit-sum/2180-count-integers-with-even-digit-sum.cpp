class Solution {
public:
    int digitSum(int n)
    {
        if(n<10) 
            return n;
        return (n%10+digitSum(n/10));
    }
    int countEven(int num) 
    {
        int ct=0;
        for(int i=1;i<=num;i++)
        {
            if((digitSum(i))%2==0)
                ct++;
        }
        return ct;
    }
};