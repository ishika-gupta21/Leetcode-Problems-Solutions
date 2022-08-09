class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a)
    {
        int min = INT32_MAX, max = INT32_MIN;
        int s1 = 0, s2 = 0, s = 0;
        for(auto i : a) 
        {
            s += i;
            s1 += i;
            if(s1 > max) max = s1;
            if(s1 < 0) s1 = 0;
            s2 += i;
            if(s2 < min) min = s2;
            if(s2 > 0) s2 = 0;
        }
        if(max < 0) 
            return max;
        return max > s - min ? max : s - min;
    }
};