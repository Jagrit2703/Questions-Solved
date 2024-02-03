class Solution {
public:
    void checkdist(vector<int>& edges, int node, vector<int>&distance, vector<bool>&visited) {
        visited[node] = true;
        int neighbour = edges[node];
        if(neighbour != -1 && visited[neighbour]==false){
            distance[neighbour] = distance[node] + 1;
            checkdist(edges,neighbour,distance,visited);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int ans = -1;
        int mindist = INT_MAX;
        int n = edges.size();
        vector<int>dist1(n,0),dist2(n,0);
        vector<bool>vis1(n,false),vis2(n,false);
        checkdist(edges, node1,dist1,vis1);
        checkdist(edges,node2,dist2,vis2);
        for(int i = 0; i<n;i++){
            if(vis1[i] == true && vis2[i] == true && mindist > max(dist1[i],dist2[i])){
                mindist = max(dist1[i],dist2[i]);
                ans = i;
            }
        }
        return ans;
    }
};