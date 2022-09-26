class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums)
    {
        int n=nums.size();
        priority_queue<int> pq1;
        priority_queue <int, vector<int>, greater<int> > pq2;
        for(int i=0;i<n;i+=2)
            pq2.push(nums[i]);
        for(int i=1;i<n;i+=2)
            pq1.push(nums[i]);
        int i=0;
        while(i<n)
        {
            if(i%2==0)
            {
                nums[i]=pq2.top();
                pq2.pop();
            }
            else
            {
                nums[i]=pq1.top();
                pq1.pop();
            }
            i++;
        }
        return nums;
    }
};