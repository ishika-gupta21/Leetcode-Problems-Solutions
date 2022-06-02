class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int r=accounts.size();
        int c=accounts[0].size();
        int sum=0,max=INT_MIN;
        for(int i=0;i<r;i++)
        {
            sum=0;
            for(int j=0;j<c;j++)
            {
                sum+=accounts[i][j];
            }
            if(sum>max)
                max=sum;
        }
        return max;
    }
};