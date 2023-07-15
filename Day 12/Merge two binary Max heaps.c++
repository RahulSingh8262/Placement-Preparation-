class Solution{
    public:
    
    void heapify(int index,vector<int>&arr,int size){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;
        
        if(left<size && arr[left]>arr[largest]){
            largest=left;
        }
        
        if(right<size && arr[right]>arr[largest]){
            largest=right;
        }
        
        if(index!=largest){
            swap(arr[index],arr[largest]);
            heapify(largest,arr,size);
        }
    }
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int>ans;
        for(auto it:a){
            ans.push_back(it);
        }
        
        for(auto it:b){
            ans.push_back(it);
        }
        
        for(int i=(n+m)/2-1;i>=0;i--){
            heapify(i,ans,n+m);
        }
        return ans;
        
    }
};