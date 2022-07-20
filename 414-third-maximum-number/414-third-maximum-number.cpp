class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        long long fst = LLONG_MIN;
        long long sec = LLONG_MIN;
        long long trd = LLONG_MIN;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] ==fst || nums[i] == sec || nums[i] == trd)continue;
            
            if(nums[i] > fst)
            {
                trd = max(trd, sec);
                sec = max(fst, sec);
                fst = nums[i];
            }
            else if(nums[i] > sec)
            {
                trd = max(trd, sec);
                sec = nums[i];
            }
            else if(nums[i] > trd)
                trd = nums[i];
        }
        
        if(trd == LLONG_MIN)
            return fst;
        return trd;
    }
};