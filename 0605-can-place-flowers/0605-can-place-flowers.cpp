class Solution
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int c=0;
        int f=0;
        int s=flowerbed.size();
        for(int i=0;i<s;i++)
        {
            if(i==0)
            {
                if(s==1)
                {
                    if(flowerbed[i]==0 && n==1)
                        return true;
                }
                else
                {
                    if(flowerbed[i]==0 && flowerbed[i+1]==0)
                    {
                        c++;
                        flowerbed[i]=1;
                    }
                }
            }
            else if(i==s-1)
            {
                if(flowerbed[i]==0 && flowerbed[i-1]==0)
                {
                    c++;
                    flowerbed[i]=1;
                }
            }
            else if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0)
            {
                c++;
                flowerbed[i]=1;
            }
            if(c==n)
                return true;
        }
        if(c>=n)
            return true;
        return false;
    }
};