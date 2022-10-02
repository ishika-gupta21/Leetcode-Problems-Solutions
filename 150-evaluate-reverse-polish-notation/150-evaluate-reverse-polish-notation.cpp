class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<long long> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="*" && tokens[i]!="-" && tokens[i]!="+" && tokens[i]!="/")
            {
                long long num=stoi(tokens[i]);
                st.push(num);
            }
            else
            {
                long long b=st.top();
                st.pop();
                long long c=st.top();
                st.pop();
                if(tokens[i]=="+")
                {
                    c=b+c;
                    st.push(c);
                }
                else if(tokens[i]=="-")
                {
                    c=c-b;
                    st.push(c);
                }
                else if(tokens[i]=="*")
                {
                    c=c*b;
                    st.push(c);
                }
                else
                {
                    c=c/b;
                    st.push(c);
                }
            }
        }
        return st.top();
    }
};