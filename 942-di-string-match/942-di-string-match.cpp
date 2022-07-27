class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        int n=s.length(),j=0;
        vector<int> v(n+1);
        for(int i=0;i<=s.length();i++)
        {
            if(s[i]=='I')
            {
                v[i]=j;
                j++;
            }
            else
            {
                v[i]=n;
                n--;
            }
        }
        return v;
    }
};