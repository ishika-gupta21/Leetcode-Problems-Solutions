class Solution {
public:
    int nextGreaterElement(int n) 
    {
        if(n / 10 == 0)
            return -1;
        vector<int> digits;
        while(n)
        {
            digits.push_back(n % 10);
            n /= 10;
        }
        int i,j;
        int size = digits.size();
        reverse(digits.begin(), digits.end()); 
        for(i = size - 2; i >= 0; i--)
        {
            if(digits[i+1] > digits[i])
                break; 
        }
        if(i < 0)
            return -1;
        for(j = size - 1; j >= 0; j--)
        {
            if(digits[j] > digits[i])
                break;
        }
        swap(digits[j], digits[i]);
        reverse(digits.begin() + i + 1, digits.end());
        long long ans = 0;
        for(int k = 0; k < size; k++)
            ans = (ans * 10) + digits[k];
        if(ans > INT_MAX)
            return -1;
        return ans;
    }
};