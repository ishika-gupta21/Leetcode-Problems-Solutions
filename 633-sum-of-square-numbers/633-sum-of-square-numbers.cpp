class Solution {
public:
    bool judgeSquareSum(int c)
    {
        if(c == 0)
            return true;
        if(c == 1)
            return true;
        long long l = 0;
        long long r = sqrt(c);
        int mid;
        while(l<=r)
        {
            if((l*l + r*r) == (long long)c)
                return true;
            else if((l*l + r*r) > c) 
                r--;
            else l++;
        }
        return false;
    }
};