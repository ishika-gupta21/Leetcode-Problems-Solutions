class Solution {
public:
    bool isSameAfterReversals(int num) 
    {
        string s = to_string(num);
        int len = s.size();
        if(len==1)
            return true;
        else
        {
            if(s[len-1]=='0')
                return false;
            else
                return true;
        }
    }
};