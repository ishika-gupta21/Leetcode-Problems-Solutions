class Solution {
public:
    int kthFactor(int n, int k) 
    {
        vector<int> factors;
        int count = 0;
        for(int i=1;i<=n;i++)
            if(n%i==0) 
            {
                factors.push_back(i);
                count++;
            }
        if(count<k)
            return -1;
        return factors[k-1];
    }
};