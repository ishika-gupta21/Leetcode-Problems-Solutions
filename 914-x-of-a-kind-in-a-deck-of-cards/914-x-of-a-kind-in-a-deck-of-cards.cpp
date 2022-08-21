class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        unordered_map<int,int> mp;
        for(auto &p:deck)
            mp[p]++;
        int res=0;
        for(auto &p:mp)
        {
            res=__gcd(p.second,res);
            if(res==1)
                return false;
        }
        return true;
    }
};