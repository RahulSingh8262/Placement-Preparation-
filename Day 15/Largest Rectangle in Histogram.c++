class Solution {
public:

    void solve(vector<int>&sr,vector<int>&heights){
        stack<int>st;
        int n=heights.size();
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                sr[i]=-1;
            }
            else{
                sr[i]=st.top();
            }
            st.push(i);
        }        
    }

     void solve1(vector<int>&sr,vector<int>&heights){
        stack<int>st;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                sr[i]=-1;
            }
            else{
                sr[i]=st.top();
            }
            st.push(i);
        }        
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int>sr(heights.size(),-1);
        vector<int>sl(heights.size(),-1);
        solve(sr,heights);
        solve1(sl,heights);
        int area,max_area=INT_MIN;
        for(int i=0;i<heights.size();i++){
           
            if(sr[i]==-1){
                sr[i]=heights.size();
              
            }
             int b=sr[i]-sl[i]-1;
            area=heights[i]*b;
            if(area>max_area){
                max_area=area;
            }
            
        }
        return max_area;
    }
};