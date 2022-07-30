class Solution {
public:
    int maxRepeating(string sequence, string word)
    {
        string s = word;
        while(sequence.find(s) != -1) 
            s+=word;
        return (s.size()/word.size()) - 1;
    }
};