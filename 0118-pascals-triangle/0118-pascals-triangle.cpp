class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> x;
    for(int j=0;j<numRows;j++){
        vector<int> y;
        long long ans = 1;
        for(int i = 1;i<=j+1;i++){
            y.push_back(ans);
            ans = ans * (j+1-i)/i;
        }
        x.push_back(y);
        }
        return x;
    }
};