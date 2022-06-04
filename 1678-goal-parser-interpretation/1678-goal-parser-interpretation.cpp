class Solution {
public:
    string interpret(string command)
    {
        int n=command.length();
        int i=0;
        string ans="";
        while(i<n)
        {
            if(command[i]=='G')
            {
                ans+="G";
                i++;
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                ans+="o";
                i+=2;
            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')')
            {
                ans+="al";
                i+=4;
            }
        }
        return ans;
    }
};