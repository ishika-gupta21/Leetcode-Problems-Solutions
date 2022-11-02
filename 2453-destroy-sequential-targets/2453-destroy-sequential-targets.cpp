class Solution {
public:
    int destroyTargets(vector<int>& nums, int space)
    {
        map<int,int> m;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]%space]++;
            maxi=max(maxi,m[nums[i]%space]);
        }
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]%space]==maxi)
                ans=min(ans,nums[i]);

        }
        return ans;
    }
};