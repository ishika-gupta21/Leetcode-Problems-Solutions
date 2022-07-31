class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i=0;
        int j=height.size()-1;
        int ar;
        int mx=INT_MIN;
        while(i<j)
        {
            ar=(j-i)*min(height[i],height[j]);
            mx=max(mx,ar);
            height[i]<=height[j] ? i++:j--;
        }
        return mx;
    }
};