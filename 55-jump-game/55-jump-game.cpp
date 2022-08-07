class Solution {
public:
    vector<int> num;
    bool canReach( int n) 
    {
        if( n == 0)
            return true;
        if( num[n] == -1) 
            return false;
        num[n] = -1;
        for( int i = n-1; i >=0; i--)
        {
            if( num[i] >= n-i && canReach(i))
                return true;
        }
        return false;
    }
    bool canJump(vector<int>& nums)
    {
        num=nums;
        return canReach(num.size()-1);
    }
};