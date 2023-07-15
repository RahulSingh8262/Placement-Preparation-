class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comparator(pair<int,int>a,pair<int,int>b){
        if(a.second<b.second){
            return true;
        }
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            v.push_back({start[i],end[i]});
        }
        
        sort(v.begin(),v.end(),comparator);
        
        int ans=1;
        
        int limit=v[0].second;
        
        for(int i=1;i<n;i++){
            if(limit<v[i].first){
                limit=v[i].second;
                ans++;
            }
        }
        
        return ans;
        
    }
};