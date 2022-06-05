class Solution {
public:
    int mySqrt(int x) 
    {
        int square = sqrt(x);
        return round(square);
    }
};