class Solution {
public:

    bool place(vector<vector<char>>& board,char c,int row,int col){
        for(int i=0;i<9;i++){
            if(board[row][i]==c){
                return false;
            }

            if(board[i][col]==c){
                return false;
            }

            if(board[int(row/3)*3+int(i/3)][int(col/3)*3+(i%3)]==c){
                return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(place(board,c,i,j)){
                            board[i][j]=c;
                            if(solve(board)){
                                return true;
                            }
                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};