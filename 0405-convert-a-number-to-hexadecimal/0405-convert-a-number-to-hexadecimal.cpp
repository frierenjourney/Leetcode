class Solution {
public:
    string toHex(int num) {
        string s;

        if(num == 0)
            return "0";

        unsigned int n = num;

        while(n > 0) {

            if(n < 16) {
                if(n < 10)
                    s.push_back('0' + n);
                else
                    s.push_back('a' + n - 10);

                break;
            }

            int x = n % 16;
            n /= 16;

            if(x < 10)
                s.push_back('0' + x);
            else
                s.push_back('a' + x - 10);
        }

        reverse(s.begin(), s.end());

        return s;
    }
};