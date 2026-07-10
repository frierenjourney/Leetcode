class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
                z=max(sum,z);
            }
            else{
                sum=0;
            }
        }
        return z;
    }
};