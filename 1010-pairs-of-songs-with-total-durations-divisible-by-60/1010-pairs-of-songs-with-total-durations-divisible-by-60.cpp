class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        vector<int> rem(60,0);
        int ans=0;
        for (int i=0;i<time.size();i++) 
        {
            int a=time[i]%60;
            if (a==0)
                ans+=rem[0]; 
            else
                ans+=rem[60-a];
            rem[a]++;
        }
        return ans;
    }
};