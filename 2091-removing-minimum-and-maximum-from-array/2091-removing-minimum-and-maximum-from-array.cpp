class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
    int maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[maxi])
            maxi = i;
        }
    int mini = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[mini]>nums[i]){
                mini = i;
            }
        }
        int left = max(maxi, mini) + 1;

        int right = nums.size() - min(maxi, mini);

        int both = min(maxi, mini) + 1 + nums.size() - max(maxi, mini);

        return min({left, right, both});
    }
};