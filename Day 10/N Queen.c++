class Solution {
public:

    bool issafe(vector<string>& board,int col,int row,int n){
        int c=col-1;
        int r=row-1;
        //check upward
        while(r!=-1 && c!=-1){
            if(board[r][c]=='Q'){
                return false;
            }
            r--;
            c--;
        }

        //check same dir 
        c=col-1;
        r=row;
        while(c>=0){
            if(board[r][c]=='Q'){
                return false;
            }
            c--;
        }

        //check for downward dir
        c=col-1;
        r=row+1;
        while(c>=0 && r<n){
            if(board[r][c]=='Q'){
                return false;
            }
            c--;
            r++;
        }
        return true;
    }

    void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int i=0;i<n;i++){
            if(issafe(board,col,i,n)){
                 board[i][col]='Q';
                 solve(col+1,board,ans,n);
                 board[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string a(n,'.');
        for(int i=0;i<n;i++){
            board[i]=a;
        }
        solve(0,board,ans,n);
        return ans;
    }
};