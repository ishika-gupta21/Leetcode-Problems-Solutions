class Solution {
public:
    int countElements(vector<int>& nums) 
    {
        if (nums.size() <= 2)
            return 0;
        int ma = INT_MIN, mi = INT_MAX;
        for (const int& n : nums)
        {
            if (ma < n)
                ma = n;
            if (mi > n)
                mi = n;
        }
        int count = 0;
        for (const int& n : nums)
        {
            if (n > mi && n < ma)
                count++;
        }
        return count;
    }
};