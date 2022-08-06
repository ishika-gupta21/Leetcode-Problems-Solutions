class Solution {
public:
    void subSet(int ind,vector<int> &arr,vector<int> &t,vector<vector<int>> &ans)
    {
        ans.push_back(t);
        for(int i=ind;i<arr.size();i++)
        {
          if(i>ind && arr[i]==arr[i-1]) 
              continue;
          t.push_back(arr[i]);
          subSet(i+1,arr,t,ans);
          t.pop_back();  
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> t;
        subSet(0,nums,t,ans);
        return ans;
    }
};