class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j = 1;
        int i=0;
        while(i<arr.size() && k>0){
            if(arr[i]==j){
                i++;
            }
            else k--;
            j++;
        }
        if(k==0)return j-1;
        else{
            return j+k-1;
        }
    }
};