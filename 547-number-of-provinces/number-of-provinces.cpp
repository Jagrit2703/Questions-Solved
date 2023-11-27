class Solution {
private:
    void dfs(int node, vector<vector<int>>& adj, int n, bool vis[]){
        vis[node] = 1;
        for(int i=0; i<n; i++){
            if(!vis[i] && adj[node][i]){
                dfs(i,adj,n,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        bool visited[200] = {0};
        int count = 0;
        for(int i=0; i<n; i++){
            if(!visited[i]){
                dfs(i,isConnected,n,visited);
                count++;
            }
        }
        return count;
    }
};