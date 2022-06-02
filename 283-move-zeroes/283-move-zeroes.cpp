class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,right=0;
        int n=nums.size();
        while(right<n){
            if(nums[right]==0)
                right++;
            else
            {
                swap(nums[right],nums[left]);
                right++;
                left++;
            }
        }
    }
};