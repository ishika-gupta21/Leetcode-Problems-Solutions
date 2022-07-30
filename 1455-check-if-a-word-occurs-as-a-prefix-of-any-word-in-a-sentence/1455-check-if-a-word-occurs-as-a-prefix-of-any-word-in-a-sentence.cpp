class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        string s="";
        int c=0;
        for(int i=0;i<sentence.length();i++)
        {
            if(sentence[i]!=' ')
                s+=sentence[i];
            else
            {
                c++;
                if(s.find(searchWord)==0)
                    return c;
                s="";
            }
        }
        c++;
        if(s.find(searchWord)==0)
            return c;
        return -1;
    }
};