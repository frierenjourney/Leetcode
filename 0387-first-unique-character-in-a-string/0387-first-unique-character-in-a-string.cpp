class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> x(26,0);
        for(int i=0;i<s.size();i++){
            x[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(x[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};