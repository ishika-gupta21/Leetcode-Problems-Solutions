class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        if(k==1)
            return nums;
        vector<int> v;
        int i=0,j=0;
        deque<int> dq;
        
        while(j<nums.size()) {
            
            while(!dq.empty() && dq.back()<nums[j])  
                dq.pop_back();
            dq.push_back(nums[j]); 

            if(j-i+1<k) 
                j++;
            else if(j-i+1==k) {
                v.push_back(dq.front());
                if(nums[i]==dq.front())    
                    dq.pop_front();
                i++;
                j++;
            } 
        }
        return v;
    }
};