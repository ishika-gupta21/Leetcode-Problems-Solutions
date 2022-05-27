class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int n=candies.size();
        vector<bool> result(n);
        for(int i=0;i<n;i++)
        {
            candies[i]+=extraCandies;
            int max=candies[i];
            for(int j=0;j<n;j++)
            {
                if(candies[j]> max)
                    max=candies[j];
            }
            if(max==candies[i])
                result[i]=true;
            else
                result[i]=false;
            candies[i]=candies[i]-extraCandies;
        }
        return result;
    }
};