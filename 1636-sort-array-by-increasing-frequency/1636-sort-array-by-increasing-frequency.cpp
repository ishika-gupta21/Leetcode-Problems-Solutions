class compare{
  public:
    bool operator() (pair<int,int>& a, pair<int,int>& b)
    {
        if(a.first<b.first)
            return false;
        else if(a.first>b.first)
            return true;
        else
        {
            if(a.second>b.second)
                return false;
            else 
                return true;
        }
    }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare> p;
        for(auto pair: m)
            p.push({pair.second,pair.first});
        vector<int> v;
        while(!p.empty())
        {
            int x=p.top().first;
            while(x--)
                v.push_back(p.top().second);
            p.pop();
        }
        return v;
    }
};