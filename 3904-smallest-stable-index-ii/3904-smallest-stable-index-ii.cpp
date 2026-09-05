class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // int i=0;
        // while(i<nums.size()){
        //     int maxi=INT_MIN;
        //     for(int j=0;j<=i;j++){
        //         if(maxi<nums[j])
        //         maxi=nums[j];
        //     }
        //     int mini=INT_MAX;
        //     for(int l=i;l<nums.size();l++){
        //         if(mini>nums[l])
        //         mini = nums[l];
        //     }
        // if(maxi-mini<=k)return i;
        // i++;
        // }
        // return -1;
        vector<int> inti(nums.size(),0);
        vector<int> fini(nums.size(),0);
        int maxi = nums[0];
        for(int i=0;i<nums.size();i++){
            inti[i] = max(maxi,nums[i]);
            maxi = inti[i]; 
        }
        int mini = nums[nums.size()-1];
        for(int i=0;i<nums.size();i++){
            fini[nums.size()-1-i] = min(mini,nums[nums.size()-1-i]);
            mini = fini[nums.size()-1-i]; 
        }
        for(int i=0;i<nums.size();i++){
            if(inti[i] - fini[i] <= k)return i;
        }
        return -1;
    }
};