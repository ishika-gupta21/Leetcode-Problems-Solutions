class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        vector<int> m1(26), m2(26);
        unordered_set<char> s;
        for(char c : word1) m1[c - 'a']++, s.insert(c);
        for(char c : word2) m2[c - 'a']++, s.erase(c);
        sort(m1.begin(), m1.end());
        sort(m2.begin(), m2.end());
        return !s.size() && m1 == m2; 
    }
};