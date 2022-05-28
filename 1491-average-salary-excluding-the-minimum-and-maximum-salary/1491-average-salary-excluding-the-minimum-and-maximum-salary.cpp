class Solution {
public:
    double average(vector<int>& salary) 
    {
        int n=salary.size();
        int max=salary[0];
        int min=salary[0];
        for(int i=0;i<n;i++)
        {
            if(salary[i]>max)
                max=salary[i];
            if(salary[i]<min)
                min=salary[i];
        }
        double s=0;
        for(int i=0;i<n;i++)
        {
            if(salary[i]!=max && salary[i]!=min)
                s+=salary[i];
        }
        return s/(n-2);
    }
};