class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int m=0;
        while(m<=j){
            if(nums[m]%2==0){
                swap(nums[m],nums[i]);
                m++;
                i++;
            }
            else{
                swap(nums[m],nums[j]);
                j--;
            }
        }

        return nums;
    }
};