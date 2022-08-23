class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        if(nums.size() < 2) return nums.size();
        vector<int> diff;
        int pos = 0, neg = 0;
        for(int i=0;i<nums.size()-1;++i) 
            diff.push_back(nums[i+1]-nums[i]);
        for(int i=0;i<diff.size();++i)
        {
            if(diff[i] < 0)
            {
                if(pos % 2) 
                    ++pos;
                if(neg % 2 == 0) 
                    ++neg;
            }
            else if(diff[i] > 0)
            {
                if(pos % 2 == 0)
                    ++pos;
                if(neg % 2)
                    ++neg;
            }
        }
        return max(pos,neg)+1;
    }
};