class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) 
    {
        int data[10001] = {0};
        int n = plantTime.size();
        int sum = 0, ans = 0;
        for (int i = 0; i < n; i++) 
        {
            data[growTime[i]] += plantTime[i];
            sum += plantTime[i];
        }
        for (int i = 1; sum; i++)
        {
            ans = max(ans, sum + i);
            sum -= data[i];
        }
        return ans;
    }
};