class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> x;
        for(int i=0;i<arr.size();i++){
            x[arr[i]]++;
        }
        unordered_set<int> x1;
        for (auto it = x.begin(); it != x.end(); it++) {
            if (x1.count(it->second)) {
                return false;
            }
            x1.insert(it->second);
        }

        return true;
    }
};