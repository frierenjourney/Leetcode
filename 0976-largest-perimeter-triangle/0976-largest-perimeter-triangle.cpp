class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        while(i>=0){
            if(i-2>=0 && nums[i]<nums[i-1]+nums[i-2] && nums[i-1]<nums[i]+nums[i-2] && nums[i-2]<nums[i-1]+nums[i-2])return nums[i]+nums[i-1]+nums[i-2];
            i--;
        }
        return 0;
    }
};