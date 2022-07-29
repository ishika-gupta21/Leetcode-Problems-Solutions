class Solution {
public:
    bool checkString(string s)
    {
        bool f=false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='b')
                f=true;
            if(f==true && s[i]=='a')
                return false;
        }
        return true;
    }
};