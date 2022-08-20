class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if(n==0) return true;
        if(flowerbed.size() == 1 && n==1 && flowerbed[0]==0) 
            return true;
        if(flowerbed.size() == 1 && n==1 && flowerbed[0]==1) 
            return false;
        int flw_plnt = 0;
        for(int i=0; i<flowerbed.size() ; i++)
        {
            if(i==0 && flowerbed[i+1] == 0 && flowerbed[0]==0)   
            {
                flw_plnt++; 
                flowerbed[0] = 1;
            }
            if(flw_plnt == n) 
                return true;
            else if(i>0 && i<flowerbed.size()-1) 
            {
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i]==0) 
                {
                    flw_plnt++; 
                    flowerbed[i] = 1;
                }
                if(flw_plnt == n) 
                    return true;
            }
            if(i == flowerbed.size() - 1 && flowerbed[i-1] == 0 && flowerbed[i]==0)                         {
                flw_plnt++; 
                flowerbed[i-1] = 1;
            }
            if(flw_plnt == n) 
                return true;
        }
        return false;
    }
};