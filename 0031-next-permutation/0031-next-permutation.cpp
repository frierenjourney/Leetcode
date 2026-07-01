class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int index = -1;

        // Find the first decreasing element from the right
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // If no such element exists, reverse the whole array
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the next greater element from the right
        for (int i = n - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Reverse the remaining part
        reverse(nums.begin() + index + 1, nums.end());
    }
};