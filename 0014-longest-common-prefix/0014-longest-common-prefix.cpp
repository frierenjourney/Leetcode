class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string y = strs[0];
        for(int i=0;i<strs.size();i++){
            string x = ""; 
            int j=0;
            while(j<strs[i].size()){
            if(strs[i][j]==y[j])
            x.push_back(y[j]);
            else break;
            j++;
            }
            y = x;

            if(y == "")
                return "";
        }
        return y;
    }
};