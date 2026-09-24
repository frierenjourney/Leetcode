class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            int sum=0;
            if(x>9){
                while(x>9){
                    sum+=x%10;
                    x=x/10;
                }
                sum+=x;
            }
            else sum = x;
            if(sum==i)return i;
        }
        return -1;
    }
};