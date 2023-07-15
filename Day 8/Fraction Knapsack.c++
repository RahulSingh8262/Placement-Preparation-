class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item a,Item b){
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        return r1>r2;
        
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double final_value=0.0;
        sort(arr,arr+n,comp);
        for(int i=0;i<n;i++){
            if(arr[i].weight<=W){
                W=W-arr[i].weight;
                final_value=final_value+arr[i].value;
            }
            else{
                final_value=final_value+(arr[i].value/(double)arr[i].weight)*(double)W;
                break;
            }
        }
        return final_value;
    }
    
        
};