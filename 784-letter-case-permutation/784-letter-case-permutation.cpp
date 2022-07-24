class Solution {
public:
    void modifyvec(string s,int i,vector<string> &v)
    {
        int l=s.length();
        if(i==l)
        {
            v.push_back(s);
            return;
        }
        if(isalpha(s[i]))
        {
            modifyvec(s,i+1,v);
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
                modifyvec(s,i+1,v);
            }
            else if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
                modifyvec(s,i+1,v);
            }
            
        }
        else if(isdigit(s[i]))modifyvec(s,i+1,v);
    }
    vector<string> letterCasePermutation(string s) 
    {
        vector<string> v;
        modifyvec(s,0,v);
        return v;
    }
};