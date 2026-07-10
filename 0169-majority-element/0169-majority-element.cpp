class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n = nums.size();

        // for(int i = 0; i < n; i++){
        //     int count = 0;

        //     for(int j = 0; j < n; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }

        //     if(count > n/2){
        //         return nums[i];
        //     }
        // }

        // return -1;
        int count = 1;
        int x = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=x){
                count--;
                if(count == 0){
                    x = nums[i];
                    count=1;
                }
            }
            else {
                count++;
        }
        }
        return x;
    }
};