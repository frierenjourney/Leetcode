class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> x(board.size(), vector<int>(board[0].size(), 0));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int t = 0;
                if(board[i][j]==1){
                    if(i-1 >= 0 && j-1 >= 0 && board[i-1][j-1]==1)t++;
                    if(i+1 <= board.size()-1 && j+1 <= board[0].size()-1 && board[i+1][j+1]==1)t++;
                    if(i+1 <= board.size()-1 && j-1 >= 0 && board[i+1][j-1]==1)t++;
                    if(i-1 >= 0 && j+1 <= board[0].size()-1 && board[i-1][j+1]==1)t++;
                    if(i+1 <= board.size()-1  && board[i+1][j]==1)t++;
                    if(i-1 >= 0  && board[i-1][j]==1)t++;
                    if(j-1 >= 0  && board[i][j-1]==1)t++;
                    if(j+1 <= board[0].size()-1  && board[i][j+1]==1)t++;
                    if(t < 2 || t > 3)
                    x[i][j] = 0;
                    else
                    x[i][j] = 1;
                }
                else{
                    if(i-1 >= 0 && j-1 >= 0 && board[i-1][j-1]==1)t++;
                    if(i+1 <= board.size()-1 && j+1 <= board[0].size()-1 && board[i+1][j+1]==1)t++;
                    if(i+1 <= board.size()-1 && j-1 >= 0 && board[i+1][j-1]==1)t++;
                    if(i-1 >= 0 && j+1 <= board[0].size()-1 && board[i-1][j+1]==1)t++;
                    if(i+1 <= board.size()-1  && board[i+1][j]==1)t++;
                    if(i-1 >= 0  && board[i-1][j]==1)t++;
                    if(j-1 >= 0  && board[i][j-1]==1)t++;
                    if(j+1 <= board[0].size()-1  && board[i][j+1]==1)t++;
                    if(t==3)x[i][j]=1;
                    else x[i][j]=0;
                }
            }
        }
        board = x;
    }
};