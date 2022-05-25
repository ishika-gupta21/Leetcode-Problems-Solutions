class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<=2)
            return n;
        vector <unordered_map<int,int>> map(n);
        int maxl=2;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    int diff=nums[j]-nums[i];
                    if(map[i].find(diff)!=map[i].end())
                        map[j][diff]=map[i][diff]+1;
                    else
                        map[j][diff]=2;
                    maxl=max(maxl,map[j][diff]);
                }
        }
        return maxl;
    }
};