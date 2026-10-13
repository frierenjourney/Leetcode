class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> x(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            x[i]=abs(nums[i]);
        }
        sort(x.begin(),x.end());
        int i=0;
        int j = nums.size()-1;
        long long z = 0;
        while(i<j){
            z += ((1LL * x[j]*x[j])-(1LL * x[i]*x[i]));
            i++;
            j--;
        }
        if(nums.size()%2!=0){
            z+=(1LL * x[i]*x[i]);
        }
        return z;
    }
};