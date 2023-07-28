class Solution {
public:

    void dfs(vector<vector<char>>& grid,int row,int col,int di[],int dj[]){
        grid[row][col]='2';
        for(int i=0;i<4;i++){
            int drow=row+di[i];
            int dcol=col+dj[i];
            if(drow>=0 && dcol>=0 && drow<grid.size() && dcol<grid[0].size() && grid[drow][dcol]=='1'){
                dfs(grid,drow,dcol,di,dj);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int di[4]={-1,1,0,0};
        int dj[4]={0,0,1,-1};

        for(int i=0;i<grid.size();i++){

            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,di,dj);
                    ans++;
                }
            }
        }
        return ans;
    }
};