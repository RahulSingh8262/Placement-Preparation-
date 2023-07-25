//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int check1=0,check2=0;
       for(int i=0;i<n;i++){
           
           check1=1,check2=1;
           //rows
           for(int j=0;j<n;j++){
               if(M[i][j]!=0 && i!=j){
                   check1=0;
                   break;
               }
           }
           
           //column
           for(int j=0;j<n;j++){
               if(M[j][i]!=1 && i!=j){
                   check2=0;
                   break;
               }
           }
           
           if(check1==1 && check2==1){
               return i;
           }
           
       }
       return -1;
    }
};