class Solution {
public:
    vector<int> countBits(int num) 
    {
       vector<int>v(num+1, 0);
        v[0] = 0;
        for (int i = 1; i <= num; i++)
            v[i] = 1 + v[i & (i-1)];
        return v;
    }
};