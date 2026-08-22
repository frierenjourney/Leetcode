class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int z = nums[0];
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>z){
                z=nums[i];
                l=i;
            }
        }
        z = 0;
        for(int i=1;i<=k;i++){
            z+=nums[l];
            nums[l]++;
        }
        return z;
    }
};