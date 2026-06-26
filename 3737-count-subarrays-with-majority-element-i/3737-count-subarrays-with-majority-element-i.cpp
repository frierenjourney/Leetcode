class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
         int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target)nums[i]=1;
            else nums[i]=-1;
        }
        long long count=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                if(sum>0)count++;
            }
            sum=0;
        }
        return count;
    }
};