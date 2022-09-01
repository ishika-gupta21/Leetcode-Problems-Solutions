class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration)
    {
        int n=timeSeries.size();
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(timeSeries[i]+duration-1>=timeSeries[i+1])
                c+=timeSeries[i+1]-timeSeries[i];
            else
                c+=duration;
        }
        c+=duration;
        return c;
    }
};