string angryProfessor(int k, vector<int> a) {
    sort(a.begin(),a.end());
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<=0) count++;
        else break;
    }
    
    if(count<k) return "YES";
    
    return "NO";
}