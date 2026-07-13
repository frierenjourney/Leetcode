class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> x;
        long long ans = 1;
        x.push_back(ans);
        for(int i = 1;i<=rowIndex;i++){
            ans = ans * (rowIndex-i+1)/i;
            x.push_back(ans);
        }
        return x;
    }
};