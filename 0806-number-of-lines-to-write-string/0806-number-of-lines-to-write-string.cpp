class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int n = s.size();
        int sum=0;
        int i=0;
        int k=1;
        while(i<n){
                sum+=widths[s[i]-'a'];
                if(sum>100){
                    sum=widths[s[i]-'a'];
                    k++;
                }
                i++;
            }
        
        return {k,sum};
    }
};