class Solution {
public:
    int minimumOperations(vector<int>& nums)
    {
        unordered_map<int,int>map;
        int c=0;
        for(auto n:nums)
            map[n]++;
        for(auto i:map)
        {
            if(i.first==0)
                continue;
            else c++;
        }
            return c;
    }
};