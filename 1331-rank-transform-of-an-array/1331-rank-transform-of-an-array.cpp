class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> x;
        vector<int> y = arr;
    sort(y.begin(),y.end());
        int j=1;
    for(int i=0;i<arr.size();i++){
        if(i==0 || y[i] != y[i-1]){
            x[y[i]]=j++;
    }
    }
    for(int i=0;i<arr.size();i++){
        arr[i] = x[arr[i]];
    }
    return arr;
    }
};