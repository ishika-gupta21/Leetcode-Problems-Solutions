class Solution {
public:
    string capitalizeTitle(string t)
    {
        for(int i=0;i<t.size();i++)
        {
            if((i==0 || t[i-1]==' ') && (i+1<t.size() && t[i+1]!=' ' && i+2<t.size() && t[i+2]!=' '))
                t[i]=toupper(t[i]);
            else
                t[i]=tolower(t[i]);
        }
        return t;
    }
};