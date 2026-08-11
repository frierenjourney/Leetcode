class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int y=nums[0];
        if(nums.size()==1)return nums[0]+1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                    y+=nums[i];
                }
            else{
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==y){
                y++;
                i=0;
            }
        }
        return y;
    }
};