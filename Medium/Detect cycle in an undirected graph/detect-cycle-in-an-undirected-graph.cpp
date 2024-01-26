//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool checkCyclic(int src, unordered_map<int,bool>&visited, vector<int>adj[]){
      queue<int>q;
      q.push(src);
      unordered_map<int,int>parent;
      visited[src]=true;
      parent[src]=-1;
      while(!q.empty()){
        int front = q.front();
        q.pop();
        for(auto nbr:adj[front]){
          if(!visited[nbr]){
            q.push(nbr);
            visited[nbr]=true;
            parent[nbr]=front;
          }
          else if(visited[nbr]==true&&nbr!=parent[front]){
            return true;
          }
        }
      }
      return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
         unordered_map<int,bool>visited;
         unordered_map<int,int>parent;
         for(int i=0;i<V;i++){
             if(!visited[i]){
                 bool ans = checkCyclic(i,visited,adj);
                 if(ans==true){
                     return true;
                 }
             }
         }
         return false;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends