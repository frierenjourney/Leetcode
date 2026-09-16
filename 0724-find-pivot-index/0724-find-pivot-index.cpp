class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     int right = 0;
        //     int left = 0;
        //     for(int j=0;j<i;j++){
        //         left+=nums[j];
        //     }
        //     for(int j=nums.size()-1;j>i;j--){
        //         right+=nums[j];
        //     }
        //     if(right==left)return i;
        // }
        // return -1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        // int left = sum;
        // int right = 0;
        // for(int i=0;i<nums.size();i++){
        //     if(left==right)return i;
        //     right+=nums[i];
        //     left = sum;
        //     sum = sum - nums[nums.size()-1-i];
        // }
        // return -1;
        if(sum==nums[0])return 0; 
        int left=0,right =0;
        for (int i = 1; i<nums.size();i++){
            
            left += nums[i-1];
            right = sum -left -nums[i];
            if(right==left)return i;
        }
        return -1;
    }
};