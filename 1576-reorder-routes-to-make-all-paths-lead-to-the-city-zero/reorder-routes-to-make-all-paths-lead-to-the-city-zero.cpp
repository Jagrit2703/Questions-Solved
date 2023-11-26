class Solution {
public:
    int count = 0;
    void dfs(int u, int parent, unordered_map<int, vector<pair<int,int>>> &adjL ){
        for(auto &P : adjL[u]){
            int i = P.first;
            int check = P.second; 

            if(i != parent){
                if(check==1){
                    count++;
                }
                dfs(i, u, adjL);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int, vector<pair<int,int>>> adjL;        
        for(int i=0;i<connections.size();i++){
            int u = connections[i][0];
            int v = connections[i][1];
            adjL[u].push_back({v,1});
            adjL[v].push_back({u,0});
        }
        dfs(0,-1,adjL);
        return count;
    }
};