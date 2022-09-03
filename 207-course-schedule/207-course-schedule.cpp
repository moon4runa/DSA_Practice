class Solution {
public:
    bool dfsCycle(int node, vector<int> adj[], vector<int>&vis, vector<int>&dfsvis){
    vis[node] = 1;
    dfsvis[node] = 1;
    for(auto it: adj[node]){
        if(vis[it] == 0){
        if(dfsCycle(it, adj, vis, dfsvis)) return true;
        }
        else{
            if(dfsvis[it] == 1) return true;
        }
    }
    dfsvis[node] = 0;
    return false;
    }


    bool cycle(vector<int> adj[], int V){
        vector<int> vis(V,0);
        vector<int> dfsvis(V,0);
        for(int i=0; i<V; i++){
            if(vis[i] == 0){
                if(dfsCycle(i, adj, vis, dfsvis)) return true;
            }
        }
        return false;
    } 

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto it: prerequisites){
            adj[it[0]].push_back(it[1]); 
        }

        if(cycle(adj, numCourses)){
            return false;
        }
        else return true;

    }
};