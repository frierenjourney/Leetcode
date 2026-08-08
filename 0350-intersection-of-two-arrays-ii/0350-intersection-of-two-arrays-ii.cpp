class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> x;
        int i=0;
        int j=0;
        while(nums2.size()>i && nums1.size()>j){
            if(nums2[i]==nums1[j]){
                x.push_back(nums1[j]);
                i++;
                j++;
            }
            else if(nums2[i]>nums1[j]){
                    j++;
                }
            else{
                i++;
            }
        }
        return x;
    }
};