class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int right = 0;
            int left = 0;
            for(int j=0;j<i;j++){
                left+=nums[j];
            }
            for(int j=nums.size()-1;j>i;j--){
                right+=nums[j];
            }
            if(right==left)return i;
        }
        return -1;
    }
};