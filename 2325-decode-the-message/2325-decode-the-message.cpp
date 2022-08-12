class Solution {
public:
    string decodeMessage(string key, string message) 
    {
        unordered_map<char,char>mp;
        char first = 'a';
        for(auto it:key)
        {
            if(it==' ') 
                continue;
            if(mp.find(it)==mp.end())
            {
                mp[it]=first;
                first++;
            }
        }
        for(auto &it:message)
        {
            if(it==' ') 
                continue;
            it = mp[it];
        }
        return message;   
    }
};