class Solution {
public:
    int findMin(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[j]){
                return nums[i];
            }
            j++;
        }
        return nums[0];
    }
};