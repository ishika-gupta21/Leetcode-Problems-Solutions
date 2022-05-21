class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0,l=nums.size()-1;
        int mid=0;
        while(f<=l)
        {
            mid=f+(l-f)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                l=mid-1;
            else
                f=mid+1;
        }
        return -1;
    }
};