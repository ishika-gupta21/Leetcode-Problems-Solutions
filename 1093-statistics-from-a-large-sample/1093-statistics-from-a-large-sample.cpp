class Solution {
public:
    double find(int mid,vector<int>count)
    {
        int i;
        for(i=0;i<256;i++)
        {
            if(mid<=count[i])
                break;
            else
                mid-=count[i];
        }
        return i;
    }
    vector<double> sampleStats(vector<int>& count) 
    {
        double mi=INT_MAX;
        double ma=INT_MIN;
        double s=0;
        double hf=0;
        double mode;
        int c=0;
        int n=count.size();
        float median;
        for(double i=0;i<n;i++)
        {
            if(count[i]!=0)
            {
                c+=count[i];
                mi=min(mi,i);
                ma=max(ma,i);
                s+=count[i]*i;
                if(count[i]>hf)
                {
                    hf=count[i];
                    mode=i;
                }
            }
        }
        if(c%2==0)
            median=(find(c/2,count)+find(c/2+1,count))/2.0;
        else
            median=find(c/2+1,count);
        vector<double> v;
        v.push_back(mi);
        v.push_back(ma);
        v.push_back(s/c);
        v.push_back(median);
        v.push_back(mode);
        return v;
    }
};