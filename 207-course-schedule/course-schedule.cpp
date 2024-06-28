    // BFS METHOD
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ad[numCourses];
        vector<int>inDegree(numCourses,0);
        for(auto i:prerequisites){
            ad[i[1]].push_back(i[0]);
            inDegree[i[0]]++;
        }
        queue<int>q;
        int count=0;
        for(int i=0;i<numCourses;i++){
            if(inDegree[i]==0){
             q.push(i);
             count++;
            }
        }
        while(q.size()){
            int x = q.front();q.pop();
            for(auto i:ad[x]){
                inDegree[i]--;
                if(inDegree[i]==0){
                    q.push(i);count++;
                }
            }
        }
        return count == numCourses;
    }
};