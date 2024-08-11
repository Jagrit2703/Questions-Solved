class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        vector<bool> visited(rooms.size(),false);    
        visited[0] = true;
        queue<int> q;
        q.push(0);        

        while(!q.empty())
        {
            int roomIndex = q.front();
            q.pop();

            for(int index:rooms[roomIndex])
            {
                if(!visited[index])
                {
                    visited[index] = true;
                    q.push(index);
                }
            }
        }
        for(bool val:visited)
            if(!val)
                return false;
        
        return true;
    }
};