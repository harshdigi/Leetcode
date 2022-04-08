class Solution {
public:
  vector<int> dx = {-1, 0, 1, 0};
    
    vector<int> dy = {0, 1, 0, -1};
    
    void dfs(vector<vector<char>>& board, int i, int j, int n, int m)
    {
        if(i < 0 || i >= n || j < 0 || j >= m || board[i][j] == 'X' || board[i][j] == '#')
            return;
        
        board[i][j] = '#';
        
        for(int k = 0; k < 4; k++)
        {
            int new_row = i + dx[k];
            
            int new_col = j + dy[k];
            
            dfs(board, new_row, new_col, n, m);
        }
    }
    
    void solve(vector<vector<char>>& board) {
        
        int n = board.size();
        
        int m = board[0].size();
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {
                    if(board[i][j] == 'O')
                    {
                        dfs(board, i, j, n, m);
                    }
                }
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(board[i][j] == '#')
                {
                    board[i][j] = 'O';
                }
            }
        }
    }
};