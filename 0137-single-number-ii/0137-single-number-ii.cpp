class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     int count  = 0;
    //     for(int i=0;i<nums.size();i++){
    //         for(int j = 0;j<nums.size();j++){
    //             if(nums[i]==nums[j])count++;
    //             if(count>1){
    //                 count = 0;
    //                 break;
    //             }
    //         }
    //         if(count == 1){
    //             return nums[i];
    //         }
    //     }
    // return 0;
    sort(nums.begin(),nums.end());
    int j=1;
    int i = 0;
    if(nums.size()==1){
        return nums[i];
    }
    while(i<nums.size()){
        if(nums[i]==nums[j]){
            i+=3;
            j+=3;
            if(i==nums.size()-1)return nums[i];
        }
        else return nums[i];
    }
    return false;
    }
};