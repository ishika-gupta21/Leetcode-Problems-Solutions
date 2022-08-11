class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int res = 0, diff = 0;
        while(numBottles) 
        {
            res += numBottles;
            int temp = (numBottles + diff)/numExchange;
            diff = (numBottles + diff)%numExchange;
            numBottles = temp;
        }
        return res;
    }
};