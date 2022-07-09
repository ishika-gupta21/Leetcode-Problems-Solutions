class Solution {
public:
    void solve(vector<string>& ans, string temp, int i, int j)
    {
        if(i == 0 && j == 0)
            ans.push_back(temp);
        else
        {
            if(i != 0) 
                solve(ans, temp+"(", i-1, j);
            if(i < j)  
                solve(ans, temp+")", i, j-1);
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        string temp;
        solve(ans, temp, n, n);
        return ans;
    }
};