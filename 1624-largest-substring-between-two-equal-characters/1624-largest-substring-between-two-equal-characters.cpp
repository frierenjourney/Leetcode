class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> hash(26,0);
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
        int x = -1;
        for(int i=0;i<s.size();i++){
            int j=s.size()-1;
            if(hash[s[i]-'a']>1){
                while(j>i){
                    if(s[j]==s[i]){
                        x=max(x,j-i-1);
                        break;
                    }
                    j--;
                }
            }
        }
        return x;
    }
};