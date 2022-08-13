class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int N = nums.size();
        int min_diff = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i=0; i<N-2; i++){
            int l = i+1;
            int r = N-1;
            while(l<r)
            {
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == target) 
                    return target;
                min_diff = (abs(sum-target) < abs(min_diff)) ? sum-target : min_diff;
                (sum > target) ? r-- : l++;
            }
        }
        return target + min_diff;
    }
};