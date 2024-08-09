class Solution {
public:
    vector<vector<string>>res;
    int N;
    bool isValid(vector<string>&board, int row, int col){
        for(int i = row; i>=0; i--){
            if(board[i][col]=='Q')return false;
        }
        //left diagonal check
        for(int i = row, j = col; i>=0 && j>=0; i--, j--){
            if(board[i][j]=='Q')return false;
        }
        //right diagonal check
        for(int i = row, j = col; i>=0 && j<N; i--, j++){
            if(board[i][j]=='Q')return false;
        }
        return true;
    }
    void search(vector<string>&board, int row){
        if(row>=N){
            res.push_back(board);
            return;
        }
        for(int col = 0; col<N; col++){
            if(isValid(board,row,col)){
                board[row][col] = 'Q';
                search(board,row+1);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        N = n;
        if(n<=0)return {{}};
        vector<string>board(n,string(n,'.'));
        search(board,0);
        return res;
    }
};