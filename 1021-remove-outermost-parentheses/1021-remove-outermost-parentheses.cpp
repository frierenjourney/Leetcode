class Solution {
public:
    string removeOuterParentheses(string s) {
        int j = 0;
        stack<char> st;
        string ans = "";

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                st.push('(');
            }
            else {
                st.pop();

                if(st.size() == 0) {
                    // outer ')' -> don't add
                }
                else {
                    if(st.size() > 0) {
                        if(s[i] == ')')
                            ans += ')';
                    }
                }
            }

            if(s[i] == '(' && st.size() > 1) {
                ans += '(';
            }
        }

        return ans;
    }
};