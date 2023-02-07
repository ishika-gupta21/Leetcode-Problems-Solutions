class Solution {
public:
    int totalFruit(vector<int>& fruits)
    {
        int first=0,second=0,total=0;
        int ans=0;
        int firstVal=0,secondVal=0;
        int firstInd=0,secondInd=0;
        for(int i=0;i<fruits.size();i++)
        {
            if(first==0 || firstVal==fruits[i])
            {
                first++;
                firstVal=fruits[i];
                firstInd=i;
            }
            else if(second==0 || secondVal==fruits[i])
            {
                second++;
                secondVal=fruits[i];
                secondInd=i;
            }
            else
            {
                total=first+second;
                ans=max(total,ans);
                if(firstInd>secondInd)
                    first=i-secondInd-1;
                else
                {
                first=i-firstInd-1;
                firstVal=secondVal;
                firstInd=secondInd;
                }
                second=1;
                secondVal=fruits[i];
                secondInd=i;
            }
        }
                total=first+second;
                ans=max(total,ans);
        return ans;
    }
};