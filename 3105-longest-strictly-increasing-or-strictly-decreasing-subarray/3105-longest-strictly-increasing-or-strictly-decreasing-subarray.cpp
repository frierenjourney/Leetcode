class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incri = 1;
        int dicri = 1;
        int j=0;
        int x=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[j]){
                incri = max(x,incri);
                x=1;
                j=i;
            }
            else{
                x++;
                j=i;
            }
        }
        incri = max(x,incri);
        x=1;
        j=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i] <= nums[j]){
                dicri = max(x, dicri);
                x=1;
                j=i;
            }
            else{
                x++;
                j=i;
            }
        }
        dicri = max(x, dicri);
        return max(incri,dicri);
    }
};