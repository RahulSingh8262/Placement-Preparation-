class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    for(auto it:arr){
        cout<<it<<" ";
    }
    set<vector<int>>ans;
    vector<vector<int>>ans1;
    int j=0,k=arr.size()-1,sum=0;
    for(int i=0;i<arr.size();i++){
        j=i+1;
        k=arr.size()-1;
        while(j<k){
            sum=arr[i]+arr[j]+arr[k];
            if(sum==0){
                ans.insert({arr[i],arr[j],arr[k]});
                j++;
                k--; 
            }
            else if(sum<0){
                j++;
            }
            else{
                k--;
            }
        }
    }
    for(auto it:ans){
        ans1.push_back(it);
    }
    return ans1;
    }
};