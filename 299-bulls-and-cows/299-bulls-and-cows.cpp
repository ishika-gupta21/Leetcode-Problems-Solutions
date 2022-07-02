class Solution {
public:
    string getHint(string secret, string guess) 
    {
        unordered_map<char,int> mp1;
        int bulls=0;
        int cows=0;
        for(int i=0;i<secret.size();i++)
        {
            if(guess[i]!=secret[i])
             mp1[secret[i]]++;
            
        }
        for(int i=0;i<guess.size();i++)
        {
            if(guess[i]==secret[i])
                bulls++;
            else if(mp1.find(guess[i])!=mp1.end() && mp1[guess[i]]>0)
            {
                cows++;
                mp1[guess[i]]--;
            }    
        }
        string res=to_string(bulls)+"A" + to_string(cows)+"B";
        return res;
    }
};