class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if(n==0)return true;
        for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        }
        string x = "";
        int j=0,i=0;
        while(i<n){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i]>='0' && s[i]<='9'){
                x.push_back(s[i]);
                j++;
                i++;
            }
            else i++;
        }
        for(int i=0;i<j/2;i++){
            if(x[i]!=x[j-1-i])return false;
        }
        return 1;
    }
};