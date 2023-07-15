class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comparator(Job a,Job b){
        return a.profit>b.profit;
    } 
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
       
        sort(arr,arr+n,comparator);
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i].dead);
        }
        vector<int>slot(maxi+1,-1);
        
        int task=0,profit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slot[j]==-1){
                    task++;
                    slot[j]=1;
                    profit+=arr[i].profit;
                    break;
                }
            }
        }
        
        return {task,profit};
    } 
};