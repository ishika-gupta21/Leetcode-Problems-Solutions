class Solution {
public:
    bool checkDistances(string s, vector<int>& distance)
    {
        vector<int> A(26,0);
        vector<int> B(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(A[s[i]-'a']!=0)
                B[s[i]-'a']=i+1;
            else
                A[s[i]-'a']=i+1;
        }
        for(int i=0;i<26;i++)
        {
            if((B[i]-A[i])!=0)
            {
                if((B[i]-A[i]-1)!=distance[i])
                    return false;
            }
        }
        return true;
    }
};