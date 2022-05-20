class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int> map;
        for(int i = 0; i < s.length(); i++)
        {
            map[s[i]]++;
            map[t[i]]--;
        }
        for(int i = 0; i < s.length(); i++) 
            if(map[s[i]] != 0) return false;
        return true;
    }
};