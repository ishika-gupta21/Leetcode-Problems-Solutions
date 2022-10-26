class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;
		mp.insert({0,-1});
		int sum=0;
		int rem=0;
		for(int i=0;i<nums.size();i++)
		{
			sum+=nums[i];
			rem=sum%k;
			if(mp.find(rem)==mp.end())
				mp[rem]=i;
			else if(i-mp[rem]>1)
				return true;
		}
		return false;
    }
};