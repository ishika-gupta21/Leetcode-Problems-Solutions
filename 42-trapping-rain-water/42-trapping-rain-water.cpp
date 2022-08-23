class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        int ans=0;
        int low=0;
        int high=n-1;
        int ml=0;
        int mh=0;
        while(low<high)
        {
            if(height[low]<height[high])
            {
                if(height[low]>ml)
                    ml=height[low];
                else
                    ans+=ml-height[low];
                low++;
            }
            else
            {
                if(height[high]>mh)
                    mh=height[high];
                else
                    ans+=mh-height[high];
                high--;
            }
        }
        return ans;
    }
};