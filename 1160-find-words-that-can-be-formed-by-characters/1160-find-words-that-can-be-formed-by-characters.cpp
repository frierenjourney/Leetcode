class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> x(27,0);
        int t=0;
        for(int i=0;i<chars.size();i++){
            x[chars[i]-'a']++;
        }
        for(int i=0;i<words.size();i++){
            bool ans = true;
            vector<int> need(27,0);
            for(int j=0;j<words[i].size();j++){
                need[words[i][j]-'a']++;
            }
            for(int j = 0; j < 26; j++) {
                if(need[j] > x[j]) {
                ans = false;
                break;
                }
            }
            if(ans==true){
                t += words[i].size();
            }
        }
    return t;
    }
};