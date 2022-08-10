class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int>sa(begin(nums1),end(nums1));
        unordered_set<int>sb(begin(nums2),end(nums2));
        vector<vector<int>> ans(2);
        for(int num : sa)
        {
            if(sb.count(num) == 0)
                ans[0].push_back(num);
        }
        for(int num : sb)
        {
            if(sa.count(num) == 0)
                ans[1].push_back(num);
        }
        return ans;
    }
};