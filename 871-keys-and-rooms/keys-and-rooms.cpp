class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int> q;
        vector<int> vis(n,0);
        vis[0]=1;
        for(int j=0;j<rooms[0].size();j++)
        {
            q.push(rooms[0][j]);
            vis[rooms[0][j]]=1;
        }
        while(!q.empty())
        {
            int i=q.front();
            q.pop();
            for(int j=0;j<rooms[i].size();j++)
            {
                if(vis[rooms[i][j]]==0)
                {
                    vis[rooms[i][j]]=1;
                    q.push(rooms[i][j]);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};