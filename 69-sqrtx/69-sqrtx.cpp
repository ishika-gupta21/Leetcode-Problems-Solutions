class Solution {
public:
    int mySqrt(int x) 
    {
        /*int square = sqrt(x);
        return round(square);*/
        if(x<=1) return x;
        int l = 0, h = x, ans;
        while(l <= h)
        {
            int mid = (h+l)/2;
            if(mid <= x/mid)
            {
                ans = mid;
                l = mid + 1;
            } 
           else
           {
               h = mid - 1;
           } 
        }
        return ans;
    }
};