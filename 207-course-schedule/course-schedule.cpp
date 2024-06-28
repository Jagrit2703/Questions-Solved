class Solution {
public:
    bool DFS(unordered_map<int,vector<int>>&graph,int u,vector<bool>&vis,vector<bool>&inRec){
        vis[u]=true;
        inRec[u]= true;
        for(auto i : graph[u]){
            if(vis[i]==false && DFS(graph,i,vis,inRec)){
                return true;
            }
            else if(inRec[i]==true){
                return true;
            }
        }
        inRec[u]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>graph; 
        vector<bool>vis(numCourses, false);
        vector<bool>inRec(numCourses, false);

        for(auto vec : prerequisites){
            int u = vec[0];
            int v = vec[1];

            graph[v].push_back(u);
        }

        for(int i = 0; i<numCourses; i++){
            if(vis[i]==false && DFS(graph,i,vis,inRec)){
                return false;
            }
        }
        return true;
    }
};