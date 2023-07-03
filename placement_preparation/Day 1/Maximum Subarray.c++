class Solution {
public:
    int maxSubArray(vector<int>& arr) {
         long long sum=0,max=INT_MIN,n=arr.size();
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
        
    }
};