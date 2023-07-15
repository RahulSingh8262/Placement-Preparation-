class Solution {
public:
    int removeDuplicates(vector<int>& a) {
      
        int i=1;
        for(int j=1;j<a.size();j++){
            if(a[j-1]!=a[j]){
                a[i]=a[j];
                 i++;
            }
        }
     
        return i;
  
    }
};