class Solution {
public:

    void solve(vector<int>&arr,int target,vector<vector<int>>&ans,vector<int>& temp,int i){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || i==arr.size()){
            return;
        }

        
        for(int j=i;j<arr.size();j++){
            if(j>i && arr[j]==arr[j-1]){
                continue;
            }
                //include
            temp.push_back(arr[j]);
            solve(arr,target-arr[j],ans,temp,j+1);
            temp.pop_back();
        }

    

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,ans,temp,0);
        return ans;

    }
};