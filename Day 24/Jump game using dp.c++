class Solution {
public:

    bool solve(vector<int>&nums,int pos,vector<int>&dp){
        
        if(pos>=nums.size()-1) return  dp[nums.size()-1]=true;

        if(dp[pos]!=-1) return dp[pos];
        for(int i=1;i<=nums[pos];i++){
            if(solve(nums,pos+i,dp)) return dp[pos]=true;
        }

        return dp[pos]=false;
    }


    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
      return  solve(nums,0,dp);
      
    }
};