class Solution {
public:
    string generateTheString(int n) 
    {
        char a='a';
        string res;
        for(int i=0;i<n;i++)
            res+=a;
        if(n%2==0)
        {
            res.erase(0,1);
            res+='b';
        }
        return res;
    }
};