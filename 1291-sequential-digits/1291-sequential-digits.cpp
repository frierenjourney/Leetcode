class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> x;
        int ans;
    for(int i = 1;i<=9;i++){
        int num = i;
        for(int j = i+1;j<=9;j++){
            num = num * 10 + j;
            if(num>=low && num<=high){
                x.push_back(num);
            }
            if(num>high){
                break;
            }
        }
    }
    sort(x.begin(),x.end());
    return x;
    }
};