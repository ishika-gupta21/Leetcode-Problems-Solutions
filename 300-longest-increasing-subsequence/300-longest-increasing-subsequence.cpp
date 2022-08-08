class Solution {
public:
    int lengthOfLIS(vector<int>& a)
    {
      int n=a.size();
      if(n<=1)
        return n;
      vector<int>dp;
      for(auto i:a)
      {
        auto it=lower_bound(dp.begin(),dp.end(),i);
        if(it==dp.end())
          dp.emplace_back(i);
        else if(*it > i)
          *it = i;
      }
        return dp.size();
    }
};