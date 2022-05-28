class Solution {
public:
    int countOdds(int low, int high) 
    {
        int c=0;
        int i;
        if(low%2==0)
            i=low+1;
        else
            i=low;
        for(;i<=high;i+=2)
        {
                c++;
        }
        return c;
    }
};