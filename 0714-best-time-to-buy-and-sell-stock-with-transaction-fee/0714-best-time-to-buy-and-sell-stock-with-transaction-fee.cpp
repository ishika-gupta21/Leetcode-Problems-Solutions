class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) 
    {
        int buy = 0, sell = -100000;
        for (int price: prices) 
        {
            buy = max(buy, sell + price - fee);
            sell = max(sell, buy - price);
        }
        return buy;
    }
};