class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n = piles.size(), l = 1, r = 1e9+7;
        while(l < r)
        {
            int m = l + (r - l) / 2, count = 0;
            for(auto n : piles) 
                count += ceil((double)n / m);
            if(count > h) 
                l = m + 1;
            else 
                r = m;
        }
        return r;
    }
};