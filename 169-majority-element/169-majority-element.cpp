class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int n=nums.size();
        unordered_map <int,int> m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int ans=0;
        for(auto it:m)
        {
            if(it.second>n/2)
                ans=it.first;
        }
        return ans;
    }
};