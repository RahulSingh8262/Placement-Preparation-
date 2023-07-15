class Solution{
    public:
    
    void solve(vector<vector<int>>&m,int &n,vector<string>&ans,string temp,int row,int col,int di[],int dj[]){
        if(row==n-1 && col==n-1 && m[row][col]==1){
            ans.push_back(temp);
            return;
        }
       
        string dir="DLRU";
        for(int i=0;i<4;i++){
            if(row>=0 && col>=0 && row<=n-1 && col<=n-1 && m[row][col]==1){
                 m[row][col]=-1;
                solve(m,n,ans,temp+dir[i],row+di[i],col+dj[i],di,dj);
                m[row][col]=1;
            }
        }
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
    
        vector<string>ans;
            // Your code goes here
        if(m[0][0]==0){
            return ans;
        }
        int i[]={1,0,0,-1};
        int j[]={0,-1,1,0};
        solve(m,n,ans,"",0,0,i,j);
    return ans;
    }
};

    