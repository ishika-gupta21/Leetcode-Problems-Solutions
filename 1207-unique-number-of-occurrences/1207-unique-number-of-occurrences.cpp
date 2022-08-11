class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int, int> mp;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        unordered_set<int> s;
        for(auto x : mp)
            s.insert(x.second);
        if(mp.size() == s.size())
            return true;
        else
            return false;    
    }
};