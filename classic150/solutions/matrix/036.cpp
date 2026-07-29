class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            string row,column,block;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    for(int k=0;k<row.size();k++)
                        if(row[k]==board[i][j])
                            return false;
                    row=row+board[i][j];
                }
                if(board[j][i]!='.')
                {
                    for(int k=0;k<column.size();k++)
                        if(column[k]==board[j][i])
                            return false;
                    column=column+board[j][i];
                }
                if(board[3*(i/3)+j/3][3*(i%3)+j%3]!='.')
                {
                    for(int k=0;k<block.size();k++)
                        if(block[k]==board[3*(i/3)+j/3][3*(i%3)+j%3])
                            return false;
                    block=block+board[3*(i/3)+j/3][3*(i%3)+j%3];
                }
            }
        }
        return true;
    }
};
