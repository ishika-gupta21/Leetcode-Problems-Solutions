class Solution {
public:
    string minWindow(string s, string t) 
    {
        unordered_map<char, int> mp;
        for (char c : t) 
            mp[c]++;
        int rem = t.size();
        int l = 0, r = 0, ldex = 0, len = INT_MAX;
        while (r < s.size()) 
        {
            char c = s[r++];
            if (mp.count(c)) 
            {
                if (--mp[c] >= 0) 
                    rem--;
            }
            while (rem == 0)
            {
                if (r - l < len) 
                {
                    len = r - l;
                    ldex = l;
                }
                c = s[l++];
                if (mp.count(c))
                {
                    if (++mp[c] > 0) 
                        rem++;
                }
            }
        }
        return len == INT_MAX ? "" : s.substr(ldex, len);

    }
};