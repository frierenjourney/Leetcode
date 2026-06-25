class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> x(n+1,0);
        for(int i=0;i<n;i++){
            x[nums[i]]++;
            if(x[nums[i]]==2)return nums[i];
        }
        return -1;
    }
};