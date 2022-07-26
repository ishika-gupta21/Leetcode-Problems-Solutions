class Solution {
public:
    vector<int> shortestToChar(string s, char c)
    {
       vector<int> temp;
       for(int i = 0; i < s.size(); i++)
       {
           if(s[i] == c)
           {
               temp.push_back(i);
           }
       }
        vector<int> ans;
        int n = INT_MAX;
        for(int j = 0; j < s.size(); j++)
        {
            for(int k = 0; k < temp.size(); k++)
            {
                n = min(n, abs(temp[k]-j));
            }
            ans.push_back(n);
            n = INT_MAX;
        }
        return ans;
    }
};