class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int x = k;
        while(i<nums.size()){
            if(nums[i] == k)
                k += x;

            else if(nums[i] > k)
                return k;
                i++;
        }
        return k;
    }
};