class Solution {
public:
    int maxDistance(vector<int>& colors) 
    {
        int s = 0, e = colors.size()-1;
        int i = 0, j = colors.size()-1;
        while(i < j)
        {
            if(colors[i] != colors[j]) return e-s;
            if(colors[j-1] != colors[i]) return j-1-s;
            if(colors[i+1] != colors[j]) return e-i-1;           
            i++;
            j--;
        }
        return e-s;
    }
};