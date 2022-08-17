class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int x, int y, int index)
    {
        if(x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] != word[index])
            return false;
        if(index == word.size()-1)
            return true;
        board[x][y] = '#';
        bool ret1 = dfs(board, word, x+1, y, index+1);
        bool ret2 = dfs(board, word, x-1, y, index+1);
        bool ret3 = dfs(board, word, x, y+1, index+1);
        bool ret4 = dfs(board, word, x, y-1, index+1);
        if(ret1 || ret2 || ret3 || ret4)
            return true;
        board[x][y] = word[index];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) 
    {
        int row = board.size();
        int col = board[0].size();
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(board[i][j] == word[0])
                {
                    if(dfs(board, word, i, j, 0))
                        return true;
                }            
            }
        }
        return false;
    }
};