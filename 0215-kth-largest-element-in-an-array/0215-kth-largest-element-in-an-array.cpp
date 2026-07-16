class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int i = 0;
        while(k>0){
            k--;
            i++;
        }
        return nums[i-1];
    }
};