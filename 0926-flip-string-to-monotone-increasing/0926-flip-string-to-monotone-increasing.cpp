class Solution {
public:
    int minFlipsMonoIncr(string s)
    {
          int oz=0;
          int zo=0;
           for(auto x:s)
           {
             if(x-'0'==0)
             {
                zo++;
                zo=min(zo,oz);
             }
             else if(x-'0'==1)
               oz++;
           }
          return min(oz,zo);
    }
};