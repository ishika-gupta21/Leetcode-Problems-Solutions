class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int bal=0,count=0; 
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
                bal++;
            else if(s[i]=='R')
                bal--;
            if(bal==0)
                count++;
        }
        return count;
    }
};