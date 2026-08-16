class Solution {
public:
    string toLowerCase(string s) {
        int i = 0;
        while(i<s.size()){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
            i++;
        }
        return s;
    }
};