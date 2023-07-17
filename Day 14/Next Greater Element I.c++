class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>out;
        map<int,int>mp;

        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }

        for(int i=0;i<nums1.size();i++){
           
            int greater=-1;
            for(int j=mp[nums1[i]]+1;j<nums2.size();j++){
                
                if(nums1[i]<nums2[j]){
                    greater=nums2[j];
                    break;
                }
                 
            }
            out.push_back(greater);
        }
        return out;
    }
};