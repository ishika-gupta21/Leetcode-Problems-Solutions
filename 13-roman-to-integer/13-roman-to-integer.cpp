class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int c=0;
        int i=0;
        while(i<n)
        {
            char ch=s[i];
            if(ch=='I' && i+1<n && s[i+1]=='V')
            {
              c+=4;
              i=i+1;  
            }
            else if(ch=='I' && i+1<n && s[i+1]=='X')
            {
              c+=9;
              i++;
            }
            else if(ch=='I')
                c+=1;
            else if(ch=='V')
              c+=5;
            else if(ch=='X' && i+1<n && s[i+1]=='L')
            {
              c+=40;
              i++;
            }
            else if(ch=='X' && i+1<n &&  s[i+1]=='C')
            {
              c+=90;
              i++;
            }
            else if(ch=='X')
            {
              c+=10;
            }
            else if(ch=='L')
              c+=50;
            else if(ch=='C' && i+1<n && s[i+1]=='D')
            {
              c+=400;
              i++;
            }
            else if(ch=='C' && i+1<n && s[i+1]=='M')
            {
              c+=900;
              i++;
            }
            else if(ch=='C')
            {
              c+=100;
            }
            else if(ch=='D')
              c+=500;
            else
              c+=1000;
            i++;
        }
        return c;
    }
};