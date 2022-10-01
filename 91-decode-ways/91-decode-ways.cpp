const int N = 110;
class Solution {
public:
    int f[N];
    int numDecodings(string s)
    {
        int n = s.size();
        if (s[0] - '0' == 0) 
            return 0;
        else 
            f[1] = 1, f[0] = 1;
        for (int i = 1; i < n; i++)
        {
            int t = s[i] - '0';
            if (t > 0) f[i + 1] += f[i];
            int r = (s[i - 1] - '0') * 10 + t;
            if (s[i - 1] != '0' && r > 0 && r < 27) f[i + 1] += f[i - 1];
            if (f[i + 1] == 0) return 0;
        }
        return f[n];
    }
};