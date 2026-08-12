class Solution {
public:
    int hammingWeight(int n) {
        if(n==0)return 0;
        int x=0;
        while(n>0){
            x+=n%2;
            n=n/2;
        }
        return x;
    }
};