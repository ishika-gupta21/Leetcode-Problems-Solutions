class Solution {
public:
    string minRemoveToMakeValid(string s)
    {
        int n=s.size(),i=0,j=0,sti=0;
        vector<int> st;
        for (;i<n;i++)
        {
            if (s[i]==')')
                if (st.size()>0) 
                    st.pop_back();
                else 
                    s[i]='_';
            else if(s[i]=='(') 
                st.push_back(i);
        }
        st.push_back(-1);
        for (i=0;j<n;j++)
        {
            if (j==st[sti]) 
                sti++;
            else if (s[j]!='_') 
                s[i++] = s[j];
        }
        return s.substr(0,i);
    }
};