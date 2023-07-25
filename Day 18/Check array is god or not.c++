class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n=nums[nums.size()-1];
        int count=1;
        
        if(nums.size()!=n+1) return false;
        else{
            for(int i=0;i<n;i++){
                if(nums[i]!=count){
                    return false;
                }
                count++;
            }
        }
        return true;
    }
};