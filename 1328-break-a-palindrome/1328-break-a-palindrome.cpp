class Solution {
public:
    string breakPalindrome(string p) 
    {
        bool dc=false;
        int lmt=p.size()/2;
        for (int i=0; i<lmt;i++) 
            if (p[i]!='a') 
            {
                p[i]='a';
                dc=true;
                break;
            }
        if (!dc) 
            p[p.size()-1]='b';
        return p.size()>1? p:"";
    }
};