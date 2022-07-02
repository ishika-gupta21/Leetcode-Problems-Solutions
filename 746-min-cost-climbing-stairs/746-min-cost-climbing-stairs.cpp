class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        int a[n];
        a[0] = 0;
        a[1] = 0;
        for(int i = 2 ; i < n ; i++)
        {
              a[i] = min(a[i-1]+cost[i-1],a[i-2]+cost[i-2]);
        }
        return min(a[n-1]+cost[n-1],a[n-2]+cost[n-2]);
    }
};