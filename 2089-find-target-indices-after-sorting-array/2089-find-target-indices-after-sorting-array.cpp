class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> x;
        int i=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                x.push_back(i);
            }
        }
        return x;
    }
};