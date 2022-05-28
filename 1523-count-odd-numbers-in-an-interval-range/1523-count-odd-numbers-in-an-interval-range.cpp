class Solution {
public:
    int countOdds(int low, int high) 
    {
        /*int c=0;
        int i;
        if(low%2==0)
            i=low+1;
        else
            i=low;
        for(;i<=high;i+=2)
        {
                c++;
        }
        return c;*/
        int res = (high-low) / 2;
        return (high%2 == 0 && low % 2 == 0) ? res: res + 1;
    }
};