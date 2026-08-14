class Solution {
public:
    int longestPalindrome(string s) {

        vector<int> x(52, 0);

        for(char c : s) {
            if(c >= 'a' && c <= 'z')
                x[c - 'a']++;
            else if(c >= 'A' && c <= 'Z')
                x[c - 'A' + 26]++;
        }

        int t = 0;
        int k = 0;

        for(int i = 0; i < 52; i++) {

            if(x[i] % 2 == 0 && x[i] > 0) {
                t += x[i];
            }
            else if(x[i] > 2) {
                t += x[i] - 1;

                if(k == 0) {
                    t++;
                    k = 1;
                }
            }
            else if(x[i] > 0) {
                if(k == 0) {
                    t++;
                    k = 1;
                }
            }
        }

        return t;
    }
};