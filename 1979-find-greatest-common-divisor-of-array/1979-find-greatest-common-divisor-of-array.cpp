class Solution {
public:
    int findGCD(vector<int>& nums) {
        int x = 1;
        int y = 1000;
        for(int i=0;i<nums.size();i++){
        x = max(x,nums[i]);
        y = min(y,nums[i]);
        }
        return gcd(x,y);
    }
};