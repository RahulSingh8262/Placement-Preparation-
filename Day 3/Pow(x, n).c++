class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0){
                return 1;
            }
        if(n>0){
            x=x;
             if(n%2==0){
            return myPow(x*x,n/2);
        }
        else{
            return x*myPow(x,n-1);
        }
            
        }
        if(n<0){
          
             if(n%2==0){
            return myPow(1/x*1/x,-n/2);
        }
        else{
            return 1/x*myPow(x,n+1);
        }
        }
        return 0;
}
    
};