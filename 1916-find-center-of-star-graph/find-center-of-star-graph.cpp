class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>adjList;
        int maxi=0;
        for(int it=0; it<edges.size();it++){
            int u=edges[it][0];   //i guess substitute for edges[it].first
            int v=edges[it][1];   //similarly for edges[it].second
            maxi=max(maxi,max(u,v));
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        for(auto i:adjList){
            if(i.second.size()==maxi-1) return i.first;
        }
        return -1;
    }
};