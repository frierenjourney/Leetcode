class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    //     vector<int> x(matrix[0].size(),0);
    //     vector<int> y(matrix.size(),0);
    //     for(int i=0;i<matrix.size();i++){
    //         for(int j=0;j<matrix[i].size();j++){
    //             if(matrix[i][j]==0){
    //                 x[j]=1;
    //                 y[i]=1;
    //             }
    //         }
    //     }
    //     for(int i=0;i<matrix.size();i++){
    //         for(int j=0;j<matrix[i].size();j++){
    //             if(x[j] || y[i]){
    //                 matrix[i][j]=0;
    //             }
    //         }
    //     }
    // for(int i=0;i<matrix.size();i++){
    //         for(int j=0;j<matrix[i].size();j++){
    //             cout<<matrix[i][j];
    //         }
    //         cout<<endl;
    //     }
    int col0=1;
    for(int i = 0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }
    for(int i = 1;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix [i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0){
        for(int i=0;i<matrix[0].size();i++){
            matrix[0][i]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<matrix.size();i++){
            matrix[i][0]=0;
        }
    }
    for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j];
            }
    }
    }
};