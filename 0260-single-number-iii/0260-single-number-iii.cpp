class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        // int n = nums.size();
        // vector<int> x;
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(i!=j && nums[i]==nums[j])
        //         count++;
        //     }
        // if(count==0)x.push_back(nums[i]);
        // }
        // return x;
    unordered_set<int> st;

for (int i = 0; i < nums.size(); i++) {

    if (st.find(nums[i]) == st.end()) {
        st.insert(nums[i]);     
    } else {
        st.erase(nums[i]);       
    }
}

vector<int> ans;

for (int x : st) {
    ans.push_back(x);
}

return ans;
    }
};