class Solution {
public:

    void solve(vector<vector<int>>&ans,vector<int>out,int i,vector<int>candidates,int target){

            if(i>=candidates.size()){
                if(target==0){
                ans.push_back(out);
                }
                return;
            }
           
            if(target==0){
                ans.push_back(out);
                return;
            }
            if(target<0){
                return;
            }

            //pick
            out.push_back(candidates[i]);
            solve(ans,out,i,candidates,target-candidates[i]);
            out.pop_back();

            //not pick
            solve(ans,out,i+1,candidates,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>out;
        solve(ans,out,0,candidates,target);
        return ans;
        
    }
};