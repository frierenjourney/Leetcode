class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int k = 0;
        bool nonZero = false;

        for(int i = 0; i < nums.size(); i++) {
            k ^= nums[i];

            if(nums[i] != 0)
                nonZero = true;
        }

        if(k != 0) {
            return nums.size();
        }

        if(nonZero) {
            return nums.size() - 1;
        }

        return 0;
    }
};