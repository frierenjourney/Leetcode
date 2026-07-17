class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int i = 0;
        int j = 1;
        int n = 1;
        vector<vector<int>> x;
        while(j<s.size()){
            if(s[i]==s[j]){
                j++;
                n++;
                if(n>=3 && (j==s.size() || s[j]!=s[j-1])){
                    x.push_back({i,j-1});
                }
            }
            else{
                i=j;
                j++;
                n=1;
            }
        }
        return x;
    }
};