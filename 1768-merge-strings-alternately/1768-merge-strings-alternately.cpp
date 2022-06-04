class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int m=word1.length();
        int n=word2.length();
        int i=0;
        string ans="";
        while(i<m && i<n)
        {
            ans+=word1[i];
            ans+=word2[i];
            i++;
        }
        if(i<m)
        {
            while(i<m)
            {
                ans+=word1[i];
                i++;
            }
        }
        if(i<n)
        {
            while(i<n)
            {
                ans+=word2[i];
                i++;
            }
        }
        return ans;
    }
};