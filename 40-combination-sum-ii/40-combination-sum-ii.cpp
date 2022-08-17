class Solution {
public:
    void Find( int i,vector<vector<int>>&ans, vector<int>&v,vector<int>&arr, int target)
    {
        if(target==0)
        { 
            ans.push_back(v);
            return;
        }
        
       for(int j=i;j<arr.size();j++)
       {
            if(j>i && arr[j]==arr[j-1])  continue;
            if(arr[j]>target)  break;
            v.push_back(arr[j]);
            Find(j+1,ans,v,arr,target-arr[j]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        Find(0,ans,v,candidates,target);
        return ans;
    }
};