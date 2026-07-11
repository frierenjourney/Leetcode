class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        int n=columnNumber;
        while(n>0){
            n--;
            int x = n%26;
            s.push_back('A' + x);
            n=n/26;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};