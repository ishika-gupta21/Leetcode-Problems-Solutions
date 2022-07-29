class Solution {
public:
    int getMaximumGenerated(int n) 
    {
        vector<int> v(n+1);
        v[0]=0;
        if(n==0)
            return 0;
        v[1]=1;
        if(n==1)
            return 1;
        int max=0;
        for(int i=2;i<n+1;i++)
        {
            if(i%2==0)
                v[i]=v[i/2];
            else
                v[i]=v[(i-1)/2]+v[(i-1)/2+1];
            if(v[i]>max)
                max=v[i];
        }
        return max;
    }
};