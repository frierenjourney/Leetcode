class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> x(n+1,0);
        for(int i=0;i<n;i++){
            x[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(x[i]==0){
                return i;
            }
        }
    return n;
    }
};