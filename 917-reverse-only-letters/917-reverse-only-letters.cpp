class Solution {
public:
    string reverseOnlyLetters(string s)
    {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j)
        {
            if((s.at(i)>=65 && s.at(i)<=90) || (s.at(i)>=97 && s.at(i)<=122))
            {
                if(((s.at(j)>=65 && s.at(j)<=90) || (s.at(j)>=97 && s.at(j)<=122)))
                {
                    swap(s.at(i),s.at(j));
                    i++;
                    j--;
                }
                else
                    j--;
            }
            else
                i++;
        }
        return s;
    }
};