class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> x(matrix.size()*matrix.size());
        int t=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                x[t]=matrix[i][j];
                t++;
            }
        }
        sort(x.begin(),x.end());
        return x[k-1];
    }
};