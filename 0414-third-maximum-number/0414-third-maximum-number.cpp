class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int count = 3;
        int i = 0;
        while(i<nums.size()){
            if(i==0 || nums[i-1]!=nums[i]){
                count--;
                if(count==0){
                    return nums[i];
                }
            }
            i++;
        }
        return nums[0];
    }
};