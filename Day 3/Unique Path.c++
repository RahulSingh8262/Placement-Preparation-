class Solution {
public:

    int solve(int m,int  n,vector<vector<int>>&dp){
        if(m==0 && n==0){
            dp[m][n]=1;
            return 1;
        }

        
       

        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int left=0,top=0;
        if(m>0){
            top=solve(m-1,n,dp);
        }
        if(n>0){
            left=solve(m,n-1,dp);
        }

        return dp[m][n]=left+top;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        solve(m-1,n-1,dp);
        return dp[m-1][n-1];
    }
};