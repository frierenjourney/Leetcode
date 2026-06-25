class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if((nums[i] ^ nums[j])==0)return true;
        //     }
        // }
        // return false;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])return true;
        }
        return false;
    }
};