class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        // string s="";
        // int c=0;
        // for(int i=0;i<sentence.length();i++)
        // {
        //     if(sentence[i]!=' ')
        //         s+=sentence[i];
        //     else
        //     {
        //         c++;
        //         if(s.find(searchWord)==0)
        //             return c;
        //         s="";
        //     }
        // }
        // c++;
        // if(s.find(searchWord)==0)
        //     return c;
        // return -1;
        stringstream ss(sentence);
        string word="";
        int count=1;
        while(ss>>word)
        {
            if(word.find(searchWord)==0)
                return count;
            count++;
        }
        return -1;
    }
};