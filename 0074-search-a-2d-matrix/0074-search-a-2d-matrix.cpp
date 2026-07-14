class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i = 0;i<matrix.size();i++){
        //     for(int j = 0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==target)return true;
        //     }
        // }
        // return false;
        // for(int i = 0;i<matrix.size();i++){
        //     if(matrix[i][0]<=target && matrix[i][matrix[0].size()-1]>=target){
        //         for(int j = 0;j<matrix[0].size();j++){
        //             if(matrix[i][j]==target){
        //                 return true;
        //             }
        //         }
        //         return false;
        //     }
        // }
        // return false;
        for(int i = 0;i<matrix.size();i++){
            if(matrix[i][0]<=target && matrix[i][matrix[0].size()-1]>=target){
                int left = 0;
                int right =  matrix[0].size()-1;
                while(left <= right){
                    int mid = (left+right)/2;
                    if(matrix[i][mid]==target){
                        return true;
                    }
                    else if(matrix[i][mid]>target){
                        right=mid-1;
                    }
                    else{
                        left=mid+1;
                    }
                }
                return false;
            }
        }
        return false;
    }
};