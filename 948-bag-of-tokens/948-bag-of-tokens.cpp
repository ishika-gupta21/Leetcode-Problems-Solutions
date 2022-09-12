class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power)
    {
        sort(tokens.begin(),tokens.end());
        int l=0,r=tokens.size()-1;
        int score=0;
        while(l<=r)
        {
            if(power>=tokens[l])
            {
                power-=tokens[l];
                l++;
                score++;
            }
            else
            {
                if(power+tokens[r]>=l && score>0 && r!=l)
                {
                    power+=tokens[r];
                    r--;
                    score--;
                }
                else
                    break;
            }
        }
        return score;
    }
};