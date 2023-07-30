class Solution {
public:

    int solve(vector<int>&nums,int pos,vector<int>&dp){
        if(pos>=nums.size()-1) return 0;
        if(dp[pos]!=-1) return dp[pos];
        int ans=1e9;
        for(int i=1;i<=nums[pos];i++){
            ans=min(ans,1+solve(nums,pos+i,dp));
        }

        return dp[pos]=ans;
    }

    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
       return solve(nums,0,dp);
    }
};