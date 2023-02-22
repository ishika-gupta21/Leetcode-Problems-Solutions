class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days)
    {
        int low = weights[0], high = 0;
        for(int w: weights)
        {
            if(w>=low)
                low = w;
            high+=w;
        }
        while (low < high) 
        {
            int mid = low + (high - low) / 2;
            int cur = 0, need = 1;
            for (int w : weights) 
            {
                if (cur + w > mid) 
                {
                    cur = 0;
                    need++;
                }
                cur += w;
            }
            if (need <= days)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};