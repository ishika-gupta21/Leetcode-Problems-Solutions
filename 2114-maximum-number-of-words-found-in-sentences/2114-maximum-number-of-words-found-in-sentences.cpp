class Solution {
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int maxn=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {  
            int space=0;
            for(char j:sentences[i])
                if(j==' ') 
                    space++;
            maxn=max(maxn,++space);
        }
        return maxn;
    }
};