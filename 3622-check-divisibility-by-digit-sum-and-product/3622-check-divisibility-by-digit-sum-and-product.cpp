class Solution {
public:
    bool checkDivisibility(int n) {
        int j=0;
        int k=1;
        int l=n;
        while(n>0){
            int z = n%10;
            j+=z;
            k*=z;
            n = n/10;
        }
        if(l%(j+k)==0)return true;
        else return false;
    }
};