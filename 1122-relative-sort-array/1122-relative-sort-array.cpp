class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> arr3;
        int i=0;
        while(i<arr2.size()){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    arr3.push_back(arr2[i]);
                }
            }
            i++;
        }
        i=0;
        int x = arr3.size();
        while(i<arr1.size()){
            int k=0;
            for(int j=0;j<arr2.size();j++){
                if(arr1[i]==arr2[j]){
                    k++;
                }
            }
            if(k==0)arr3.push_back(arr1[i]);
            i++;
        }
        sort(arr3.begin()+x,arr3.end());
        return arr3;
    }
};