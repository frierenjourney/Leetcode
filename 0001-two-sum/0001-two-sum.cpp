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
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //        if( nums[i]+nums[j]==target){
        //         return{i,j};
        //        }
        //     }
        // }
        // return{1};
    
    }
};