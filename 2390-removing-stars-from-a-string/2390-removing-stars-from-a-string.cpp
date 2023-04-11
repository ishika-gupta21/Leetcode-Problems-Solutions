class Solution {
public:
    string removeStars(string s)
    {
        int j=0, n=s.length(); 
        for(int i=0; i<n; i++) 
        {
            if(s[i] == '*') 
            {
                if(j > 0) 
                    j--;
            }
            else
                s[j++] = s[i];
        }
        return s.substr(0,j); 
    }
};