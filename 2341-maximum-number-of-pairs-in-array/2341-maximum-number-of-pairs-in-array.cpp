class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums)
    {
        unordered_map<int,int> mp;
        vector<int> ans;
        int ans1=0,ans2=0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto it:mp)
        {
            if(it.second %2!=0)
            {
                ans1+=(it.second/2);
                ans2++;
            }
            else
                ans1+=(it.second/2);
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};