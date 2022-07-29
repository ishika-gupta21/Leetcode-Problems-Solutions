class Solution {
public:
    string greatestLetter(string s) 
    {
        string a="";
        for(char c='z';c>='a';c--)
        {
            if(find(s.begin(), s.end(), c)!=s.end() && find(s.begin(), s.end(), toupper(c))!=s.end())
            {
                a=toupper(c);
                return a;
            }
        }
        return "";
    }
};