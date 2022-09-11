class Solution {
public:
    int fillCups(vector<int>& amount) 
    {
        sort(amount.begin(),amount.end());
        int sum12=amount[0]+amount[1];
        int max=amount[2];
        if (sum12<=max)
            return max;
        return max+(sum12-max+1)/2;
    }
};