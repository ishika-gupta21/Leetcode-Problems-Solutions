class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int> arr(n);
        for(int i = 0; i < n / 2; i++) 
        {
            if(i==n-i-1)
                arr[i]=0;
            else
            {
            arr[i] = i + 1;
            arr[n-1-i] = -(i+1);
            }
        }
        return arr;
    }
};