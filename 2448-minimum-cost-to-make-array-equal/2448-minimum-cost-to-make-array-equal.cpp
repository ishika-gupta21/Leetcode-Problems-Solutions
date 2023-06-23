class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
         long long l = 0 , r = 1000000 , ans = LONG_MAX;
         while(l<=r) {
             long long m = (l + r)/2 , a = medianf(nums,cost,m) , b = medianf(nums,cost,m+1);
             if(a < b) r = m - 1;
             else l = m + 1;
             ans = min(ans,min(b,a));
         }
        return ans;
    }
    long long medianf(vector<int> &nums,vector<int>&cost,long long m) {
         long long cnt = 0;
         for(int i=0; i<nums.size(); i++) cnt+=(long long)(cost[i] *  abs(m - nums[i]));
         return cnt;
    } 
};