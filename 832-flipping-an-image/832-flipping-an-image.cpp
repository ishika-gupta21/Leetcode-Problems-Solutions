class Solution {
public:
    vector<int> reverse(vector<int>& ar)
    {
        int n = ar.size();
        for(int i=0;i<n/2;i++)
            swap(ar[i],ar[n-i-1]);
        return ar;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        for(auto& x:image)
        {
            x=reverse(x);
            for(auto& y:x)
            {
                if(y==0) 
                    y=1;
                else 
                    y=0;
            }
        }
        return image;
    }
};