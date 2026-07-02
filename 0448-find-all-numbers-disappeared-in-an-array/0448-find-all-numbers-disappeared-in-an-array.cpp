class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> x;
        vector<int> hash(n,0);
        for(int i=0;i<n;i++){
            hash[nums[i]-1]++;
        }
        for(int i=0;i<n;i++){
            if(hash[i]==0){
                x.push_back(i+1);
            }
        }
        return x;
    }
    // for(int i=0;i<n;i++){
    //     int k=0;
    //     for(int j=0;j<n;j++){
    //         if(i+1 == nums[j]){
    //             k++;
    //         }
    //     }
    //     if(k==0)x.push_back(i+1);
    // }
    // return x;
    // }
};