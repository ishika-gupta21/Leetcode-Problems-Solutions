class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) 
    {
        unordered_map<int, int> mpp;
        int n=nums.size();
        for(int i=0; i<n; i++)
            mpp[nums[i]]=i;
        int cnt=0;
        for(auto it : nums)
        {
            int b=it;
            int a=b-diff;
            int c=diff + b;
            if(mpp.find(a)!=mpp.end() and mpp.find(c)!=mpp.end())
            {
                if(mpp[a]<mpp[b] and mpp[b]<mpp[c])
                    cnt++;
            }
        }
        return cnt;

    }
};