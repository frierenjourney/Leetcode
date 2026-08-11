class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> x(26,0);
        vector<int> y(26,0);
        for(int i=0;i<ransomNote.size();i++){
            x[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.size();i++){
            y[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(y[i]<x[i])return false;
        }
        return true;
    }
};