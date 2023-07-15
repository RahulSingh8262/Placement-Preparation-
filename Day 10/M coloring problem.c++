class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    
    bool issafe(vector<int>adj[],int node,vector<int>&color,int cdone){
        for(auto it:adj[node]){
            if(color[it]==cdone){
                return false;
            }
        }
        return true;
    }
    
    bool solve(vector<int> adj[],int node,int m,vector<int>&color,int &size){
        if(node==size){
            return true;
        }
        
       for(int i=1;i<=m;i++){
           if(issafe(adj,node,color,i)){
               color[node]=i;
               if(solve(adj,node+1,m,color,size)){
                   return true;
               }
               color[node]=-1;
           }
       }
        
        return false;
     
    }
    
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        vector<int>adj[n];
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(graph[i][j]==1 && i!=j){
                   adj[i].push_back(j);
               }
           }
        }
        
        
        vector<int>color(n,-1);
        if(solve(adj,0,m,color,n)){
            return true;
        }
        return false;
        
    
    }
};