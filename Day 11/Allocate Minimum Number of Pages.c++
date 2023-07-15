  class Solution 
{
    public:
    bool IsValid(int arr[],int n,int k,int mid){
        int student=1;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum>mid){
                student++;
                sum=arr[i];
            }
            if(k<student){
                return false;
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(N<M){
            return -1;
        }
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0; i<N; i++){
            maxi=max(maxi,A[i]);
            sum+=A[i];
        }
        int start=maxi;
        int end=sum;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(IsValid(A,N,M,mid)==true){
                res=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return res;//code here
 
    }
};