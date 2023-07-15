// User function Template for C++

class Solution {
public:

    bool ispossible(int dis,vector<int>& stalls,int k){
        int count=1;
        int lastcow=stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-lastcow>=dis){
                count++;
                lastcow=stalls[i];
            }
            if(count>=k)    return true;
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int l=0;
        int h=1e9;
        int ans=-1;
        while(l<=h){
            int mid=(l)+(h-l)/2;
            if(ispossible(mid,stalls,k)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        
        return ans;
    }
};