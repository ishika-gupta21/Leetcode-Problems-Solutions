class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        /*int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                    c++;
            }
        }
        return c;*/
        int n = nums.size();
        map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        int count = 0;
        
        for(auto item : mp)
        {
            count += (item.second*(item.second-1))/2;
        }
        return count;
    }
};