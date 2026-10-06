class Solution {
public:
    int minAddToMakeValid(string s) {
        int x = 0;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')st.push('(');
            else{
                if(st.size()!=0){
                if(st.top()=='(')st.pop();
                else st.push(')');
                }
                else{
                st.push(')');
                }
            }
        }
        return st.size();
    }
};