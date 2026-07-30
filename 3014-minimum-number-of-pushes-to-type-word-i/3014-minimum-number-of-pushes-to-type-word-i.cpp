class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int count=0;
        int i = 1;
        while(n>0){
            int p = min(n,8);
            count+=p*i;
            i++;
            n=n-p;
        }
        return count;
    }
};