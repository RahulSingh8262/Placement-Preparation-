class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        
        int current_streak=1,max_streak=1;
        for(auto it:mp){
            int el=it.first;
            if(mp.find(el+1)!=mp.end()){
                current_streak++;
            }
            else{
                max_streak=max(max_streak,current_streak);
                current_streak=1;
            }
        }

        return max_streak;
        
    }
};