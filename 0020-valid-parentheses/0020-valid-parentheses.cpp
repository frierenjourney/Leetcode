class Solution {
public:
    bool isValid(string s) {
        stack<int> k;
        for(int i=0;i<s.size();i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                k.push(s[i]);
            }
            else{
            if (k.empty())
                return false;
            if (s[i] == ')' && k.top() != '(')
                return false;

            if (s[i] == ']' && k.top() != '[')
                return false;

            if (s[i] == '}' && k.top() != '{')
                return false;
            
            k.pop();
            }
        }
        return k.empty();
    }
};