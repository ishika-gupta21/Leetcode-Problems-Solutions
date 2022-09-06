class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) 
    {
        int maxlen=INT_MIN;
        int c=0;
        for(int i=0;i<rectangles.size();i++)
        {
            int m=min(rectangles[i][0],rectangles[i][1]);
            if(m==maxlen)
                c++;
            else if(m>maxlen)
            {
                maxlen=m;
                c=1;
            }
        }
        return c;
    }
};