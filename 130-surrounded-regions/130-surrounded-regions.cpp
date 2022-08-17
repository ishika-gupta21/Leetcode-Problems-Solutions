class Solution {
public:
    void solve(vector<vector<char>>& board) 
    {
        queue<pair<int,int>> q; //Queue initialised for storing indexes
        int n = board.size();   //taking row size
        if(n==0)    //for edge case 
            return;
        int m = board[0].size();    //taking column size
        vector<vector<bool>> vis(n,vector<bool>(m,0));  //intialising visited 2D vector
        for(int i=0;i<n;i++)    //for Row only
        {
            if(board[i][0]=='O')     
                q.push({i,0});      //Storing the index of outmost "O" characters
            if(board[i][m-1]=='O')
                q.push({i,m-1});    //Same as above 
        }
        for(int i=0;i<m;i++)    //for Column only
        {
            if(board[0][i]=='O')
                q.push({0,i});      //Storing the index of outmost "O" character in the 0th column
            if(board[n-1][i]=='O')
                q.push({n-1,i});    //same as above for n-1th column
        }
        int dr[4] = {-1,0,1,0}; //initialising row array for cheacking adjacent "O"
        int dc[4] = {0,-1,0,1}; //initialising column array for checking adjacent "O"
        
        while(!q.empty())
        {
            int x = q.front().first;    
            int y = q.front().second;
            q.pop();
            board[x][y] = 'S';  //Putting a character of our choice in the place of "O"
            vis[x][y] = 1;  //and also updating visited to 1
            for(int i=0;i<4;i++)
            {
                int x_p = x + dr[i];    //x_p is x point for adjacent elements
                int y_p = y + dc[i];    // y_p is y point for adjacent elements
                if(x_p>=0 && x_p<=n-1 && y_p>=0 && y_p<=m-1 && board[x_p][y_p]=='O' && vis[x_p][y_p]==0)    //we will change the char of those elements only which are unvisited and adjacent to outmost "O"
                {
                    q.push({x_p,y_p});  //Storing the index of the adjacent "O"
                    vis[x_p][y_p]=1;    //Updating visited of adjacent to 1
                }
            }
        }
        //Now iterating over whole array
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='S')    //Checking if the character is "O" or adjacent to "O" , if yes then we will change the temporary char "S" to "O" for output purpose
                    board[i][j]='O';
                else
                    board[i][j]='X';    //if O appears on any other side except outmost part or adjacent to it then we will update it to "X"
            }
        }
    }
};