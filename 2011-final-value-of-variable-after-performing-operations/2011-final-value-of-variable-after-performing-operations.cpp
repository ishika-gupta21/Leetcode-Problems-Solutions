class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations)
    {
        int c=0;
        int n=operations.size();
        for(int i=0;i<n;i++)
        {
            string s=operations[i];
            if(s[0]=='-')
                c--;
            else if(s[0]=='+')
                c++;
            else if(s[2]=='-')
                c--;
            else
                c++;
        }
        return c;
    }
};