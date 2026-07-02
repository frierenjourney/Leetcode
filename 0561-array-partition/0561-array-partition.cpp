class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int sum=0;
        for(int i=1;i<n;i+=2){
            sum+=nums[i];
        }
        return sum;
    }
};