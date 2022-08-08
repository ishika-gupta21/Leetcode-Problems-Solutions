class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        stack<int> st1;
        stack<int> st2;
        for(int i=nums.size()-1;i>=0;i--)
            st2.push(nums[i]);
        vector<int> ans(nums.size(),0);
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!st1.empty() && st1.top()<=nums[i])
                st1.pop();
            if(st1.empty())
            {
                while(!st2.empty() && st2.top()<=nums[i])
                    st2.pop();
                if(st2.empty())
                    ans[i]=-1;
                else
                    ans[i]=st2.top();
            }
            else
                ans[i]=st1.top();
            st1.push(nums[i]);
        }
        return ans;
    }
};