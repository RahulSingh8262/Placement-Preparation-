class Solution {
public:
    int pivot(vector<int>& nums,int n){
        int s=0;
        int e=n-1;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]>nums[mid+1]){
                return mid+1;
            }
            else if(nums[mid]<nums[n-1]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;

    }
    int binarysearch(vector<int>&nums,int s,int e,int t){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==t){
                return mid;
            }
            else if(nums[mid]<t){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if(nums.size()==1 ){
            if(target==nums[0]){
                return 0;
            }
            return -1;
        }
        int p=pivot(nums,nums.size());

        if(p==-1 ||  p>=nums.size()){
            p=0;
        }
        int ans=-1;
        if(nums[p]<=target && target<=nums[nums.size()-1]){
            ans=binarysearch(nums,p,nums.size()-1,target);
        }
        else{
            ans=binarysearch(nums,0,p-1,target);
        }
        return ans;
    }
};