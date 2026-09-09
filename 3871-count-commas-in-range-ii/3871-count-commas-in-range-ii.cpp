class Solution {
public:
    long long countCommas(long long n) {

        if(n < 1000)
            return 0;

        else if(n < 1000000)
            return n - 999;

        else if(n < 1000000000LL)
            return (2 * (n - 999999)) + 999000;

        else if(n < 1000000000000LL)
            return (3 * (n - 999999999)) + 1998999000LL;

        else if(n < 1000000000000000LL)
            return (4 * (n - 999999999999LL)) + 2998998999000LL;

        else if(n == 1000000000000000LL)
            return 3998998998999005LL;

        return 0;
    }
};