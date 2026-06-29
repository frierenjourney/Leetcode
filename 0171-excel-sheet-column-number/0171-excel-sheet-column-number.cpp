class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int x=0;
        for(int i=0;i<n;i++){
            x=(x*26)+(columnTitle[i]-64);
        }
        return x;
    }
};