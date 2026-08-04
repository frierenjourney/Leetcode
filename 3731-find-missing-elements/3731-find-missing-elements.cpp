class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> x;
        sort(nums.begin(),nums.end());
        int i = nums[0];
        int j = nums[nums.size()-1];
        int k=0;
        while(k<nums.size()){
            if(i!=nums[k]){
                x.push_back(i);
            }
            else{
                k++;
            }
            i++;
        }
        return x;
    }
};