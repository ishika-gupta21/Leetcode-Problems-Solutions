class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> freq(101,0);
        int n = nums.size();
        for(int i = 0; i<n ;i++ )
            freq[nums[i]]++;
        vector<int> mins(101,0);
        for(int i = 1;i<101;i++)
            mins[i] = mins[i-1] + freq[i-1];
        vector<int> ans;
        for(int i = 0;i<n;i++)
            ans.push_back(mins[nums[i]]);
        return ans;
    }
};