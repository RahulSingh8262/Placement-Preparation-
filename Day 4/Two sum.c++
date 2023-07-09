class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>out;
        unordered_map<int,int>mp;
        int i=0;
        while(i!=nums.size()){
            if(mp.find(target - nums[i]) != mp.end()){
                out.push_back(i);
                out.push_back(mp[target-nums[i]]);
                break;
            }
            mp[nums[i]]=i;
            i++;
        }
        
        return out;
    }
};