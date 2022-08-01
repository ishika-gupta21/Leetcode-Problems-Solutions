class Solution {
public:
    int longestPalindrome(vector<string>& words) 
    {
        unordered_map<string, int> map;
        int res = 0;
        for(auto& s: words)
        {
            if (map.find(s) != map.end())
            {
                if (--map[s] == 0)
                    map.erase(s);
                res += 4;
            }
            else 
            {
                reverse(begin(s), end(s));
                ++map[s];
            }
        }
        for(const auto& p: map) 
        {
            if (p.first[0] == p.first[1])
                return res + 2;
        }
        return res;
    }
};