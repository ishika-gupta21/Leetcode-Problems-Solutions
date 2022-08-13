class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites)
    {
        vector<int> topo(n,0);
		vector<int> ans;
		queue<int> q;
		vector<int> adj[n];
		for(int i=0;i<prerequisites.size();i++)
		{
			topo[prerequisites[i][0]]++;
			adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
		}

		for(int i=0;i<n;i++)
		{
			if(topo[i]==0)
				q.push(i);
		}
		while(!q.empty())
		{
			int temp = q.front();
			q.pop();
			ans.push_back(temp);

			for(auto it:adj[temp])
			{
				topo[it]--;
				if(topo[it]==0) q.push(it);              
			}
		}
		if(ans.size()==n) return ans;
		else return {}; 
    }
};