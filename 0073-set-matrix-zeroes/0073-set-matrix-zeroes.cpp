class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> x(matrix[0].size(),0);
        vector<int> y(matrix.size(),0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    x[j]=1;
                    y[i]=1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(x[j] || y[i]){
                    matrix[i][j]=0;
                }
            }
        }
    for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j];
            }
            cout<<endl;
        }
    }
};