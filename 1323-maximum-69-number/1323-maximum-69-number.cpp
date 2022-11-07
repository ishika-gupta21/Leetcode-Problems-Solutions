class Solution 
{
public:
    int maximum69Number (int num) 
    {
        vector<int> v;
        while(num!=0)
        {
            v.push_back(num%10);
            num/=10;
        }
        bool te = false;
        int n=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(te==false && v.at(i)==6)
            {
                n=(n*10)+9;
                te=true;
            }
            else
                n=(n*10)+v.at(i);
        }
        return n;
    }
};