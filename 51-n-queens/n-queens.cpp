class Solution {
public:

bool safe(vector<string>&board,int row,int col){
int r=row, c=col;
while(r>=0&&c>=0){
    if(board[r][c]=='Q') return false;
    r--;
    c--;
}
c=col;
while(c>=0){
    if(board[row][c]=='Q') return false;
    c--;
}
int n=board.size();
c=col;
r=row;
while(r<n && c >=0){
if(board[r][c]=='Q') return false;
r++;
c--;
}
return true;
}

void  solve(vector<string>&board,int col,int n,vector<vector<string>>&ans) {
if(col==n) 
{ 
       ans.push_back(board);
    return;
}
for(int row=0;row<n;row++){
    if(safe(board,row,col)){
     board[row][col]='Q';
    solve(board,col+1,n,ans);
     board[row][col]='.';
        }
}
}
 vector<vector<string>> solveNQueens(int n) {
 vector<vector<string>>ans;
 vector<string>board;
string s(n,'.');
for(int i=0;i<n;i++) board.push_back(s);
solve(board,0,n,ans);
return ans;

    }
};