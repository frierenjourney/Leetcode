class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int x = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                count++;
                x = max(x,count);
            }
            else{
                count = 1;
            }
        }
        return x;
    }
};