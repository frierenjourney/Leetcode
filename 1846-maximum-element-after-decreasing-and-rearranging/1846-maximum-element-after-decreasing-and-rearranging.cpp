class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int i=0;
        arr[i]=1;
        while(i<n-1){
            if(arr[i+1]-arr[i]<=1)
            i++;
            else{
                arr[i+1]=1+arr[i];
                i++;
            }
        }
        return arr[n-1];
    }
};