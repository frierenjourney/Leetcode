class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> hash(10e5,0); 
       for(int i = 0; i<nums.size();i++){
            hash[nums[i]]++;    
       }
       vector<int> x;
       for(int i = 1; i<hash.size();i++){
            if(hash[i] > 1)x.push_back(i);
       }
       return x;
    }
};