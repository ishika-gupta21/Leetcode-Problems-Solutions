class Solution {
public:
    string largestGoodInteger(string num)
    {
        string s="";
        for(int i=0;i<num.length()-2;i++)
        {
            string str=num.substr(i,3);
            if(str[0]==str[1] and str[1]==str[2])
                s=max(s,str);
        }
        return s;
    }
};