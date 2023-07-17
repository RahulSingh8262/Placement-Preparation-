class Solution {
public:
    
    
    
    int minimumIndex(vector<int>& nums) {
         unordered_map<int,int>mp1;
            unordered_map<int,int>mp2;
        
        for(auto it:nums){
            mp1[it]++;
        }
        
        for(int i=0;i<nums.size();i++){
            mp2[nums[i]]++;
            mp1[nums[i]]--;
            
            if(mp2[nums[i]]*2>i+1 && mp1[nums[i]]*2>(nums.size()-i-1)) return i;
            
        }
        
        return -1;
    }
};