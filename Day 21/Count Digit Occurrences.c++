int CountDigitOccurrences(int l, int u, int x) {
    int count=0;
    for(int i=l;i<=u;i++){
        int num=i;
        while(num>0){
            int digit=num%10;
            if(digit==x) count++;
            num/=10;
        }
    }
    return count;
}