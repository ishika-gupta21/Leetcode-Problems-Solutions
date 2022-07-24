class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s)
    {
        int line=1; 
        int pixels=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            pixels+=widths[s[i]-'a'];
            if(pixels==100)
            {
                line++;
                pixels=0;
            }
            else if(pixels>100)
            {
                line++;
				pixels=widths[s[i]-'a'];
            }
        }
        if(pixels==0)
        {
            line--;
            pixels=100;
        }
        return {line,pixels};
    }
};