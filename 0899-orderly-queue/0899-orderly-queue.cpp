class Solution {
public:
    string orderlyQueue(string s, int k) 
    {
        if (k > 1)
        {
            sort(begin(s), end(s));
            return s;
        }
        int pivot = 0;
        for (int i = 1, lmt = s.size(), j, s1, s2; i < lmt; i++) 
        {
            j = lmt, s1 = pivot, s2 = i;
            while (j--)
            {
                if (s[s1] < s[s2]) 
                    break;
                else if (s[s1] > s[s2]) 
                {
                    pivot = i;
                    break;
                }
                else 
                {
                    s1++, s2++;
                    if (s2 == lmt) 
                        s2 = 0;
                    else if (s1 == lmt)
                        s1 = 0;
                }
            }
        }
        if (!pivot) return s;
        string res = s.substr(pivot);
        s.resize(pivot);
        return res + s;
    }
};