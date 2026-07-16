class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        vector<int> x;
        for(int i = 0;i<n;i++){
            maxi = max(maxi,nums[i]);
            x.push_back(gcd(nums[i], maxi));
        }
        sort(x.begin(),x.end());
        n = x.size();
        long long sum = 0;
        int k = n-1;
        for(int j = 0;j<(n)/2;j++){
            sum+=gcd(x[j], x[k]);
            k--;
        }
        return sum;       
    }
};