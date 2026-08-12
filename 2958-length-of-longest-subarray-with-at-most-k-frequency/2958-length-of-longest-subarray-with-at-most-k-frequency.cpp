class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> x;
        int t=0;
        int j=0;
        for(int i = 0; i < nums.size(); i++) {
            x[nums[i]]++;
        while((x[nums[i]])>k){
                x[nums[j]]--;
                j++;
            }
        t=max(t,i-j+1);
        }
        return t;
    }
};