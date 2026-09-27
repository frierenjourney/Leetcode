class Solution {
public:
    string reverseParentheses(string s) {
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                int j = i+1;
                while(j<s.size()){
                    if(s[j]=='(')break;
                    else if(s[j]==')'){
                        int z=i+1;
                        int y=j-1;
                        while(z<y){
                            swap(s[z],s[y]);
                            z++;
                            y--;
                        }
                        s.erase(j, 1);  
                        s.erase(i, 1);  
                        i=-1;
                        break;
                    }
                    j++;
                }
            }
            i++;
        }
        return s;
    }
};