class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int x = k;
        while(i<nums.size()){
            if(nums[i]-k != 0 && nums[i]>k){
                return k;
            }
            else if(k == nums[i])
            k+=x;
            i++;
        }
        return k;
    }
};