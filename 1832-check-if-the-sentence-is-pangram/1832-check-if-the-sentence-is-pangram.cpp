class Solution {
public:
    bool checkIfPangram(string s)
    {
        int n=s.length();
        vector<int> v(26,0);
        for(int i=0;i<n;i++)
        {
            v[s[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(v[i]==0)
                return false;
        }
        return true;
    }
};