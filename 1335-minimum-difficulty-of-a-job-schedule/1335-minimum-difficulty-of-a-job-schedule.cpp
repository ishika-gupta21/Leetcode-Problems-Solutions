class Solution {
public:
    int minDifficulty(vector<int>& a, int d)
    {
        if(a.size()<d) return -1; 
		vector<vector<int>> dp(a.size(),vector<int>(d+1,-1));
		function<int(int,int)> recur=[&](int x,int d) 
        {
			if(d==0&&x==a.size()) 
				return 0;
			if(x>=a.size()||d<=0) 
				return 1000000;
			if(dp[x][d]!=-1) return dp[x][d];
			int mx=INT_MIN,ans=INT_MAX;
			for(int i=x;i<a.size();i++)
            {
				mx=max(mx,a[i]);
				ans=min(ans,mx+recur(i+1,d-1));
			}
			return dp[x][d]=ans;
		};
		return recur(0,d);
    }
};