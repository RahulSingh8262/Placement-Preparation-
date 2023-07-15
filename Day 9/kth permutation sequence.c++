class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>arr;
        int fact=1;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
            fact=fact*i;
        }
        fact=fact/arr.size();
        string ans="";
       k--;
        while(true){
            ans=ans+to_string(arr[k/fact]);
            arr.erase(arr.begin()+k/fact);
             
            if(arr.size()==0) break;

            k=k%fact;
            fact=fact/arr.size();
           
            
            
        }
        return ans;
    }
};