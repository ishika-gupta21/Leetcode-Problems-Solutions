class Solution {
public:
    string removeDuplicates(string s) 
    {
        for(int i = 1; i < s.length(); i++)
        {
            if(i == 0) 
                i = 1;
            if((s[i] - s[i-1]) == 0)
                s.erase(--i, 2), --i;
        }
        return s;
    }
};