class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i=0,j=0;
        if(n==0){
            return;
        }
        while(i<m){
            if(num1[i]<=num2[j]){
                i++;
            }
            if(num1[i]>num2[j]){
                int temp=num1[i];
                num1[i]=num2[j];
                num2[j]=temp;
                int l=0;
                while(l<num2.size()-1  && num2[l]>num2[l+1]){
                    swap(num2[l],num2[l+1]);
                    l++;
                }
                i++;
            }
        }

        while(i<m+n){
            num1[i]=num2[j];
            j++;
            i++;
        }
    }
};