class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        unordered_map<char,int> m;
        int c=0;
        for(int i=0;i<jewels.length();i++)
        {
            m[jewels[i]]++;
        }
        for(int i=0;i<stones.length();i++)
        {
            if(m[stones[i]]>0)
                c++;
        }
        return c;
    }
};