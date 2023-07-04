class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>out;
        int a,b,n=intervals.size(),i=0;
        while(i<n){
            a=intervals[i][0];
            b=intervals[i][1];

            while(i<n-1 && intervals[i+1][0]<=b){
                b=max(b,intervals[i+1][1]);
                i++;
            }
            i++;
       
        out.push_back({a,b});
        }
        return out;
    }
};