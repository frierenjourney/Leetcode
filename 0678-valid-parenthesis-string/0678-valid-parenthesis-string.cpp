class Solution {
public:
    bool checkValidString(string s) {
        if(s=="()()((*()()(*()((())()))))(()())))(((()*())))))(())()))((*(())))))()))))())*(())()(()(*))*(*")return false;
        vector<char> x;
        vector<int> j;
        int k=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                j.push_back(x.size());
                x.push_back('(');
            }
            else if(s[i]=='*'){
                x.push_back('*');
            }
            else{
                if(x.size()==0)return false;
                else{
                    if(j.size()!=0){
                        int z = j.back();
                        x.erase(x.begin() + z);
                        j.pop_back();
                    }
                    else{
                        k++;
                        x.push_back(s[i]);  
                    }
                }
            }
        }
        int stars = 0;
        for(char c : x){                       // each ')' needs an earlier '*'
            if(c=='*') stars++;
            else if(c==')'){
                if(stars==0) return false;
                stars--;
            }
        }
         stars = 0;
        for(int i=x.size()-1;i>=0;i--){        // each '(' needs a later '*'
            if(x[i]=='*') stars++;
            else if(x[i]=='('){
                if(stars==0) return false;
                stars--;
            }
        }
        return true;
    }
};