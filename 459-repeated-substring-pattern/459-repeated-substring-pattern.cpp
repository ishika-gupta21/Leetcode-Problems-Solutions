class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        string str = s+s;
        string s1 = str.substr(1,str.size()-2);
        return s1.find(s)!=-1;
    }
};