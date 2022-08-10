class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income)
    {
        double ans=0;
        if(income==0)
            return ans;
        for(int i=0;i<brackets.size();i++)
        {
            if(income==0)
                break;
            int x=0;
            if(i==0)
                x=brackets[i][0];
            else
                x=brackets[i][0]-brackets[i-1][0];       
            if(income>x)
                income-=x;
            else
            {
                x=income;
                income=0;
            }
            ans+=(x*brackets[i][1]);
        }
        return ans/100;
    }
};