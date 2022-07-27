class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
        unordered_map<string ,int> mp;
        for(string x: words1)
        {
            if(!mp[x]) 
                mp[x]=1;     
            else 
                mp[x]=-1;         
        }        
        for(string y: words2)
            if(mp[y]>=1) 
                mp[y]++;
        int ans=0;
        for(auto it:mp)
            if(it.second==2) 
                ans++;
        return ans;
    }
};