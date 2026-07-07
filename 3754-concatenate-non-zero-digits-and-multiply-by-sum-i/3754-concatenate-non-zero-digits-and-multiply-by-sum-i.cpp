class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long x=0;
        long long z=1;
        while(n>0){
            if(n%10!=0){
                sum+=(n%10);
                x=(x)+((n%10)*z);
                z*=10;
            }
            n=n/10;
        }
        if(sum==0)return 0;
        long long k = x*sum;
        return k;
    }
};