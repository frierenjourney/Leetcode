class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int k=2;
        int i=0;
        int j=0;
        while(k<nums.size()){
            if(arr1[i]>arr2[j]){
                arr1.push_back(nums[k]);
                k++;
                i++;
            }
            else{
                arr2.push_back(nums[k]);
                k++;
                j++;
            }
        }
        for(int i=0;i<arr1.size();i++){
            nums[i] = arr1[i];
        }
        for(int i=arr1.size();i<arr1.size()+arr2.size();i++){
            nums[i] = arr2[i-arr1.size()];
        }
        return nums;
    }
};