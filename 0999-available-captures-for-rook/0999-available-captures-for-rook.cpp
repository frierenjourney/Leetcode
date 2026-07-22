class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int k=-1;
        int l=0;
        for(int i = 0;i<8 && k == -1;i++){
            for(int j = 0;j<8;j++){
                if(board[i][j]=='R'){
                    k=i;
                    l=j;
                    break;
                }
            }
        }
        int sum = 0;
        int i = k-1;
        int j = l;
        while(i>=0){
            if(board[i][j]=='.'){
                i--;
            }
            else if(board[i][j]=='p'){
                sum+=1;
                break;
            }
            else{
                break;
            }
        }
        i=k+1;
        while(i<8){
            if(board[i][j]=='.'){
                i++;
            }
            else if(board[i][j]=='p'){
                sum+=1;
                break;
            }
            else{
                break;
            }
        }
        i = k;
        j = l-1;
        while(j>=0){
            if(board[i][j]=='.'){
                j--;
            }
            else if(board[i][j]=='p'){
                sum+=1;
                break;
            }
            else{
                break;
            }
        }
        j=l+1;
        while(j<8){
            if(board[i][j]=='.'){
                j++;
            }
            else if(board[i][j]=='p'){
                sum+=1;
                break;
            }
            else{
                break;
            }
        }
        return sum;
    }
};