class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& p) {
         vector<int>adj[V];
        for(int i=0;i<p.size();i++){
            adj[p[i][0]].push_back(p[i][1]);
        }
        
         vector<int>indegree(V,0);
	    vector<int>ans;
	    for(int i=0;i<V;i++){
	        for(auto it:adj[i]){
	            indegree[it]++;
	        }
	    }
	    
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    
	    
	    while(!q.empty()){
	        int x=q.front();
	        q.pop();
	        ans.push_back(x);
	        for(auto it:adj[x]){
	            indegree[it]--;
	            if(indegree[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    
	   if(ans.size()<V){
	       return false;
	   }
	   
	   return true;
	
	
    }
};