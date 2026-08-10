class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if(nums.size()==1 || nums.size()==0)return 0;
        int x=INT_MIN;
        int y=INT_MAX;
    for(int i = 0;i<nums.size();i++){
        x=max(x,nums[i]);
    }
    for(int i = 0;i<nums.size();i++){
        y=min(y,nums[i]);
    }
    y = y + k;
    int t = x - y;
    if(t>=-k && t<=k){
        x=y;
    }
    else x=x - k;
    return x-y;
    }
};