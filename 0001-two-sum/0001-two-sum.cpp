class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> x;
        for(int i=0;i<nums.size();i++){
            int first = nums[i];
            int second = target - first;
            if(x.find(second) != x.end()){
                return {i,x[second]};
            }
            x[first] = i;
        }
        return {-1,-1};
    }
};