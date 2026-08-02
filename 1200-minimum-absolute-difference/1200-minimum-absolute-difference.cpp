class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> x;
        sort(arr.begin(),arr.end());
        int a = arr[1]-arr[0];
        for(int i=1;i<arr.size();i++){
            a = min(a,(arr[i]-arr[i-1]));
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==a){
                x.push_back({arr[i-1],arr[i]});
            }
        }
        return x;
    }
};