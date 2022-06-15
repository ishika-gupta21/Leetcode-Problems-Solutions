class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target)
                return mid;
            if (nums[low] <= nums[mid])
            {
                if(target >= nums[low] and target <= nums[mid])
                    high = mid-1;
                else 
                    low = mid + 1;
            }
            else if (nums[low] > nums[mid])
            {
                if(target >= nums[mid] and target <= nums[high])
                    low = mid + 1;
                else 
                    high = mid;
            }
        }
        return -1;
    }
};