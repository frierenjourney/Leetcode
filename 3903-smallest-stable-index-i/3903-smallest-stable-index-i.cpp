class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i=0;
        while(i<nums.size()){
            int maxi=INT_MIN;
            for(int j=0;j<=i;j++){
                if(maxi<nums[j])
                maxi=nums[j];
            }
            int mini=INT_MAX;
            for(int l=i;l<nums.size();l++){
                if(mini>nums[l])
                mini = nums[l];
            }
        if(maxi-mini<=k)return i;
        i++;
        }
        return -1;
    }
};