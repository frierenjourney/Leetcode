class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int close = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else{
                if(i != s.size()-1 && s[i+1] == ')') {
                    i++;
                }
                else {
                    close++;
                }

                if(open > 0) {
                    open--;
                }
                else {
                    close++;
                }
            }
        }
        return 2*open+close;
    }
};