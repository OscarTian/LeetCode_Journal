class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<bool> visitedin(n,0);
        vector<vector<bool>> visited(m,visitedin);
        for(int i=0;i<m;i++)
        {
            if(!visited[i][0])
            {
                visited[i][0]=true;
                if(board[i][0]=='O')
                    dfs(board,visited,i,0);
            }
            if(!visited[i][n-1])
            {
                visited[i][n-1]=true;
                if(board[i][n-1]=='O')
                    dfs(board,visited,i,n-1);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!visited[0][i])
            {
                visited[0][i]=true;
                if(board[0][i]=='O')
                    dfs(board,visited,0,i);
            }
            if(!visited[m-1][i])
            {
                visited[m-1][i]=true;
                if(board[m-1][i]=='O')
                    dfs(board,visited,m-1,i);
            }
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(!visited[i][j]&&board[i][j]=='O')
                    board[i][j]='X';
    }
    void dfs(vector<vector<char>>& board,vector<vector<bool>>& visited,int x,int y)
    {
        int m=board.size();
        int n=board[0].size();
        if(x!=0)
            if(!visited[x-1][y]&&board[x-1][y]=='O')
            {
                visited[x-1][y]=true;
                dfs(board,visited,x-1,y);
            }
        if(x!=m-1)
            if(!visited[x+1][y]&&board[x+1][y]=='O')
            {
                visited[x+1][y]=true;
                dfs(board,visited,x+1,y);
            }
        if(y!=0)
            if(!visited[x][y-1]&&board[x][y-1]=='O')
            {
                visited[x][y-1]=true;
                dfs(board,visited,x,y-1);
            }
        if(y!=n-1)
            if(!visited[x][y+1]&&board[x][y+1]=='O')
            {
                visited[x][y+1]=true;
                dfs(board,visited,x,y+1);
            }
    }
};
