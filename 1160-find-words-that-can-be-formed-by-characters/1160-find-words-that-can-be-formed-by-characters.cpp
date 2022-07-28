class Solution {
public:
    int countCharacters(vector<string>& words, string chars)
    {
        int c=0;
        unordered_map<char, int> chars_map;
        for(auto i: chars)
            chars_map[i]+=1;
        for(auto word:words) 
        {
            bool substring = true;
            for(auto alpha:word) 
            {
                int freq = count(word.begin(), word.end(), alpha);
                if(freq>chars_map[alpha])
                {
                    substring=false;
                    break;
                }
            }
            if(substring)
                c+=word.size();
        }
        return c;
    }
};