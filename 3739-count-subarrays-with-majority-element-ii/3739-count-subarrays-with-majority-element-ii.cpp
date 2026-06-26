class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {

        int n = nums.size();

        // Step 1: Transform the array
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            if (nums[i] == target)
                prefix[i + 1] = prefix[i] + 1;
            else
                prefix[i + 1] = prefix[i] - 1;
        }

        // Step 2: Coordinate Compression
        vector<int> all = prefix;

        sort(all.begin(), all.end());
        all.erase(unique(all.begin(), all.end()), all.end());

        int m = all.size();

        // Fenwick Tree
        vector<int> bit(m + 1, 0);

        auto update = [&](int idx) {
            while (idx <= m) {
                bit[idx]++;
                idx += idx & (-idx);
            }
        };

        auto query = [&](int idx) {
            long long sum = 0;

            while (idx > 0) {
                sum += bit[idx];
                idx -= idx & (-idx);
            }

            return sum;
        };

        long long ans = 0;

        // Insert prefix[0]
        int pos = lower_bound(all.begin(), all.end(), prefix[0]) - all.begin() + 1;
        update(pos);

        // Step 3: Count previous smaller prefix sums
        for (int i = 1; i <= n; i++) {

            pos = lower_bound(all.begin(), all.end(), prefix[i]) - all.begin() + 1;

            // Count prefix sums smaller than current
            ans += query(pos - 1);

            update(pos);
        }

        return ans;
    }
};