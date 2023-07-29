class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	void dfs(vector<int>adj[],vector<int>& visited,int node,stack<int>& st){
	    visited[node]=1;
	    for(auto it:adj[node]){
	        if(!visited[it]){
	            dfs(adj,visited,it,st);
	        }
	    }
	    
	    st.push(node);
	}
	
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   vector<int>ans;
	   stack<int>st;
	   vector<int>visited(V,0);
	   for(int i=0;i<V;i++){
	       if(visited[i]==0){
	           dfs(adj,visited,i,st);
	       }
	   }
	   
	   while(!st.empty()){
	       int x=st.top();
	       st.pop();
	       ans.push_back(x);
	   }
	   
	   return ans;
	}
};