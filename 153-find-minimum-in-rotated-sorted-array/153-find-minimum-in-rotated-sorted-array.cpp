class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int b=0,e=n-1;
        int mid=0;
        while(b<=e)
        {
            mid=b+(e-b)/2;
            if(nums[mid]>=nums[e])
                b++;
            else
                e=mid;
        }
        return nums[mid];
    }
};