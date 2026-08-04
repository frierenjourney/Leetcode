class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // vector<int> x;
        // sort(nums.begin(),nums.end());
        // int i = nums[0];
        // int j = nums[nums.size()-1];
        // int k=0;
        // while(k<nums.size()){
        //     if(i!=nums[k]){
        //         x.push_back(i);
        //     }
        //     else{
        //         k++;
        //     }
        //     i++;
        // }
        // return x;
        vector<int> hash(101,0);
        vector<int> x;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int z=0;
        for(int i=0;i<hash.size();i++){
            if(hash[i]==1){
                z=i;
                break;
            }
        }
        int y=0;
        for(int i=100;i>0;i--){
            if(hash[i]==1){
                y=i;
                break;
            }
        }
        for(int i=z;i<y;i++){
            if(hash[i]!=1){
                x.push_back(i);
            }
        }
        return x;
    }
};