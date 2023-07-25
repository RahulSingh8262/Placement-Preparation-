class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>pq;

        vector<int>ans;

        for(int i=0;i<k;i++){
            pq.insert(nums[i]);
        }

        ans.push_back(*--pq.end());

        for(int i=k;i<nums.size();i++){
                
                pq.erase(pq.find(nums[i-k]));
                pq.insert(nums[i]);
               
                ans.push_back(*--pq.end());
        }

        return ans;
    }
};