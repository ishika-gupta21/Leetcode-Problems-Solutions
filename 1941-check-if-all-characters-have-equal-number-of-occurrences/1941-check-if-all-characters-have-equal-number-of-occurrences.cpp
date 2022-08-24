class Solution {
public:
    bool areOccurrencesEqual(string s)
    {
        map<char,int>m;
        for(auto x:s) m[x]++;
        int c = -1;
        for(auto x:m)
        {
            if(c==-1)
                c = x.second;
            else if(x.second!=c)
                return false;
        }
        return true;
    }
};