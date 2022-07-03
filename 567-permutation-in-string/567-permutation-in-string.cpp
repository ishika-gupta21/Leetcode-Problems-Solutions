class Solution {
public:
    bool checkInclusion(string s1, string s2)
    {
        int l=s1.length();
        if(l>s2.length()){
            return false;
        } 
        unordered_map<char,int>m;
        unordered_map<char,int>ans;
        for(int i=0;i<l;i++)
            m[s1[i]]++;  
        for(int j=0;j<l;j++)
            ans[s2[j]]++;
        if(ans==m)
            return true;
        for(int i=1;i<=s2.length()-l;i++)
        {
            if(ans[s2[i-1]]==1)
                ans.erase(s2[i-1]);
            else
                ans[s2[i-1]]--;
            ans[s2[i+l-1]]++;
            if(ans==m) 
                return true;
        }
        return false;
    }
};