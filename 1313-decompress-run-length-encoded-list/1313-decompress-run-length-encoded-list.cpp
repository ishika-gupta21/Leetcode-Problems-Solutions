class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums)
    {
        vector<int> d;
        for(int i=0;i<nums.size();i+=2)
        {
            while(nums[i]>0)
            {
                d.push_back(nums[i+1]);
                nums[i]--;
            }
        }
        return d;
    }
};