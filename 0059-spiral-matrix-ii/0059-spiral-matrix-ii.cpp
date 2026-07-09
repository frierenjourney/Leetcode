class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left = 0, right = n-1;
        int top = 0, bottom = n-1;
        vector<vector<int>> x(n,vector<int>(n));
        int k=1;
        while(top <= bottom && right>=left){
        for(int i=left;i<=right;i++){
            x[top][i]=k;
            k++;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            x[i][right]=k;
            k++;
        }
        right--;
        if(top <= bottom){
        for(int i = right;i>=left;i--){
            x[bottom][i]=k;
            k++;
        }
        bottom--;
        }
        if(right>=left){
        for(int i=bottom;i>=top;i--){
            x[i][left]=k;
            k++;
        }
        left++;
        }
    }
    return x;
    }
};