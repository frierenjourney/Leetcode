class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxi=0;
        int j=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            int x=nums[i]-nums[j];
            maxi = max(x,maxi);
            j++;
        }
        return maxi;
    }
};