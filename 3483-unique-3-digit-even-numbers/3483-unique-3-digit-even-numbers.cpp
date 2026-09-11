class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        int ans = 0;

        for(int num = 100; num <= 999; num+=2) {

            int x = num;

            int a = x % 10;
            x = x / 10;

            int b = x % 10;
            x = x / 10;

            int c = x % 10;

            vector<int> need(10, 0);

            need[a]++;
            need[b]++;
            need[c]++;

            // Count digits available
            vector<int> have(10, 0);

            for(int i = 0; i < digits.size(); i++) {
                have[digits[i]]++;
            }

            bool possible = true;

            for(int i = 0; i <= 9; i++) {
                if(need[i] > have[i]) {
                    possible = false;
                    break;
                }
            }

            if(possible)
                ans++;
        }

        return ans;
    }
};