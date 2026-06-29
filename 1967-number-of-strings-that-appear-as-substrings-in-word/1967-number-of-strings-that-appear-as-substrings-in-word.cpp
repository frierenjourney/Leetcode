class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = word.size();
        int count=0;
        for(int i=0;i<patterns.size();i++){
            int k=0;
            int j=0;
            int x=0;
            while(j<n){
                if(patterns[i][k]==word[j]){
                    x++;
                    k++;
                    j++;
                    if(x==patterns[i].size()){
                        count++;
                        break;
                    }
                }
                else{
                    j = j - x + 1; // backtrack j
                    x=0;
                    k = 0; 
                }
                }
            }
        return count;
    }
};