class Solution {
public:
    string reverseVowels(string s) {
        vector<int> x;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                x.push_back(i);
            }
        }
        for(int i=0;i<x.size()/2;i++){
            swap(s[x[i]],s[x[x.size()-1-i]]);
        }
        return s;
    }
};