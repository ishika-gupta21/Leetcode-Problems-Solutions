class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
       vector<int> ans;
       vector<int> h(26,0);
       vector<int> ph(26,0);
       int win=p.size();
       int len=s.size();
        if(len<win)
            return ans;
        int l=0,r=0;
        while(r<win)
        {
            ph[p[r]-'a']+=1;
            h[s[r++]-'a']+=1;
        }
        r-=1;
        while(r<len)
        {
            if(ph==h)
                ans.push_back(l);
            r+=1;
            if(r!=len)
                h[s[r]-'a']+=1;
            h[s[l]-'a']-=1;
            l++;
        }
        return ans;
    }
};