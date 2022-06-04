class Solution {
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char,int> map;
        int n=s.length();
        char ch;
        for(int i=0;i<n;i++)
        {
            map[s[i]]++;
        }
        int m=t.length();
        for(int i=0;i<m;i++)
        {
            if(map.find(t[i])==map.end() || map[t[i]]==0)
            {
                ch=t[i];
                break;
            }
            else
                map[t[i]]--;
        }
        return ch;
    }
};