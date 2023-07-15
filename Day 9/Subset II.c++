class Solution {
public:

    void solve(vector<int>nums,vector<vector<int>>&ans,vector<int>out,int i){
        ans.push_back(out);
        if(i>=nums.size()){
            return;
        }
        unordered_set<int>s={};
        for(int j=i;j<nums.size();j++){
            if(s.find(nums[j])==s.end()){
            s.insert(nums[j]);
            out.push_back(nums[j]);
            solve(nums,ans,out,j+1);
            out.pop_back();
            }
            
        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>out;
        sort(nums.begin(),nums.end());
        solve(nums,ans,out,0);
        return  ans;
    }
};