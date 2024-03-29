class Solution {
public:
    int countKDifference(vector<int>& nums, int k)
    {
        unordered_map<int,int> mp;
        set<int> s;
        for(auto it:nums)
        {
            mp[it]++;
            s.insert(it);
        }
        int ans=0;
        for(auto it=s.begin();it!=s.end();it++)
            ans+=mp[*it]*mp[*it+k];
        return ans;
    }
};