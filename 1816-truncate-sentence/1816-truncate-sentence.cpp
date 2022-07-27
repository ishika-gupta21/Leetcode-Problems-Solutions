class Solution {
public:
    int findNthOccur(string str, char ch, int N)
    {
        int occur = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ch)
                occur += 1;
            if (occur == N)
                return i;
        }
        return str.length();
    }

    string truncateSentence(string s, int k)
    {
        return s.substr(0, findNthOccur(s, ' ', k));
    }
};