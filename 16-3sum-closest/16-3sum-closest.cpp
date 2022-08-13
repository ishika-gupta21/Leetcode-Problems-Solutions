class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end());
		int difference = INT_MAX;
		int ans = 0;
		for(int i = 0; i < nums.size()-2; i++) 
        {
			int front = i+1;
			int end = nums.size()-1;
			while(front < end)
            {
				int diff = abs(nums[i]+nums[front]+nums[end]-target);
				if(diff <= difference) 
                {
					difference = diff;
					ans = nums[i] + nums[front] + nums[end];
				}
				if(nums[i] + nums[front] + nums[end] - target < 0)
					front++;
				else if(nums[i] + nums[front] + nums[end] - target > 0)
					end--;
				else
					return ans;
			}
		}
		return ans;
    }
};