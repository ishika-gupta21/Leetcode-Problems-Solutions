class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int lim = cost.size(), i = 0, j = 1, k = 2;
        while(k != lim) 
            cost[k++] += min(cost[i++], cost[j++]);
        return min(cost[i],cost[j]);
    }
};