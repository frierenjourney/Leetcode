class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        int i = 0;
        int j = 0;
        int start = 0;

        while (i < n) {

            if (haystack[i] == needle[j]) {

                if (j == 0)
                    start = i;

                i++;
                j++;

                if (j == m)
                    return start;
            }
            else {

                if (j > 0) {
                    i = start + 1; // move to next possible starting point
                    j = 0;         // restart matching
                }
                else {
                    i++;
                }
            }
        }

        return -1;
    }
};