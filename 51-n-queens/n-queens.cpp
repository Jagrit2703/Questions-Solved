class Solution {
public:
    vector<vector<string>>res;
    unordered_set<int>diag;
    unordered_set<int>antidiag;
    unordered_set<int>cols;
    int N;
    void search(vector<string>&board, int row){
        if(row>=N){
            res.push_back(board);
            return;
        }
        for(int col = 0; col<N; col++){
            int diagC = row+col;
            int antiDiagC = row-col;
            if(cols.find(col)!=cols.end() || diag.find(diagC)!=diag.end() || antidiag.find(antiDiagC)!=antidiag.end()){
                continue;
            }
            cols.insert(col);
            diag.insert(diagC);
            antidiag.insert(antiDiagC);
            board[row][col] = 'Q';

            search(board,row+1);

            cols.erase(col);
            diag.erase(diagC);
            antidiag.erase(antiDiagC);
            board[row][col] = '.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        N = n;
        vector<string>board(n,string(n,'.'));
        search(board,0);
        return res;
    }
};