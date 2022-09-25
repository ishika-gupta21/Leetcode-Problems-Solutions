class Solution {
public:
    int search(int l,int h,vector<int> &nums,int x)
    {
       int ans=0;
       while(h>=l)
       {
            int mid=l+(h-l)/2;
            if(nums[mid]<=x)
            {
                ans=mid+1;
                l=mid+1;
            }
            else h=mid-1;
       }
       return ans;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries)
    {
        int n=nums.size(),l=0,h=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++) 
            nums[i]+=nums[i-1];
        for(int i=0;i<queries.size();i++)
            queries[i]=search(l,h,nums,queries[i]);
        return queries;
    }
};