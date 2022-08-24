class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> res;
        for(int i: arr)
        {
            if( res.size() != n)
            {
                if( i == 0)
                {
                    res.push_back(0);
                    if( res.size() == n )
                        break;
                }
                res.push_back(i);
            }
            
        }
        arr = res;
    }
};