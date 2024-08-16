class Solution {
private:
    int n;
    vector<bool> keys;
    void dfs(int key,vector<vector<int>>& rooms){
        keys[key] = true;
        for(auto &room: rooms[key]){
            if(!keys[room]) dfs(room,rooms);
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        n = rooms.size();
        keys.resize(n,false);
        keys[0] = true;
        dfs(0,rooms);
        for(int i=0; i<n; ++i)
            if(!keys[i]) return false;
        return true;
    }
};