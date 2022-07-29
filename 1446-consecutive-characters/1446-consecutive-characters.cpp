class Solution {
public:
    int maxPower(string s) 
    {
        int maxm=1,count=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
                count++;
            else
            {
                maxm=max(maxm,count);
                count=1;
            }
        }
        maxm=max(maxm,count);
        return maxm;
    }
};