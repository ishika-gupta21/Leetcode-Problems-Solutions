class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int s, int t) 
    {
        int n = routes.size();
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            for(auto ti:routes[i])
                mp[ti].push_back(i);
        }
        if(!mp[s].size())
            return -1;
        if(!mp[t].size())
            return -1;
        unordered_set<int> st;
        queue<pair<int,int>> q;
        q.push({s,0});
        while(q.size())
        {
            auto temp = q.front();
            q.pop();
            int x = temp.first;
            int c = temp.second;
            if(x==t)
                return c;
            for(auto it:mp[x])
            {
                for(auto ch:routes[it])
                {
                    if(st.find(ch)==st.end())
                    {
                        q.push({ch,c+1});
                        st.insert(ch);
                    }
                }
            }
        }
        return -1;
    }
};