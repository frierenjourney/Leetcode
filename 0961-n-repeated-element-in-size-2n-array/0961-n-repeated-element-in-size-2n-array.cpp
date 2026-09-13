// class Solution {
// public:
//     int repeatedNTimes(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1]){
//                 return nums[i];
//             }
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;

            if(mp[nums[i]] == 2)
                return nums[i];
        }

        return 0;
    }
};