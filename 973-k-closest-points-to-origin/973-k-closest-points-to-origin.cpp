class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        multimap<int, int> mp;
        for(int i=0;i<points.size();i++)
        {
            int x=points[i][0], y=points[i][1];
            mp.insert( {x*x + y*y , i} );
        }
        vector<vector<int>> ans;
        for(auto it = mp.begin(); k > 0; ++it, --k)
            ans.push_back(points[it->second]);
        return ans;
    }
};