class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        int area1 = abs((by2-by1)*(bx2-bx1));  
        int area2 = abs((ay2-ay1)*(ax2-ax1));   
        int x2 = min(ax2,bx2), y2 = min(ay2,by2), x1 = max(ax1,bx1), y1 = max(ay1, by1);
        int overlap = abs((y2-y1) * (x2-x1)); 
        if(x2>x1 && y1<y2)
            return area1 + area2 - overlap;
        return area1 + area2; 
    }
};