class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        queue<pair<int,int>> q;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                 q.push({i,j});
                else
                    mat[i][j]=-1;
            }
        }
        vector<vector<int>> dir={{0,1},{-1,0},{1,0},{0,-1}};
        int len=0;
        while(!q.empty())
        {
            int size=q.size();
            len++;
            while(size--)
            {
                auto [i,j]=q.front();
                q.pop();
                for(vector<int> v: dir)
                {
                    int r=i+v[0];
                    int co=j+v[1];
                    if(r<0 || co<0 || r==mat.size() || co==mat[0].size() || mat[r][co]!=-1)
                        continue;
                    mat[r][co]=len;
                    q.push({r,co});
                }
            }
        }
        return mat;
    }
};