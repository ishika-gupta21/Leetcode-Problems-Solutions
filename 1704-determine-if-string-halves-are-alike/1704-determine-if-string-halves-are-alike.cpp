class Solution {
public:
    bool halvesAreAlike(string s)
    {
        int n=s.length();
        int mid=(n/2);
        int c1=0,c2=0;
        for(int i=0;i<mid;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                c1++;
            if(s[mid+i]=='a' || s[mid+i]=='e' || s[mid+i]=='i' || s[mid+i]=='o' || s[mid+i]=='u' || s[mid+i]=='A' || s[mid+i]=='E' || s[mid+i]=='I' || s[mid+i]=='O' || s[mid+i]=='U')
                c2++;
        }
        if(c1==c2)
            return true;
        else
            return false;
    }
};