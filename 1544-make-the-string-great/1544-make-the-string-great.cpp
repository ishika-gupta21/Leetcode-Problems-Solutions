class Solution {
public:
    string makeGood(string s)
    {
        for(int i = 1; i < s.length(); i++)
        {
            if(i == 0) 
                i = 1;
            if(abs(s[i] - s[i-1]) == 32)
                s.erase(--i, 2), --i;
        }
        return s;
    }
};