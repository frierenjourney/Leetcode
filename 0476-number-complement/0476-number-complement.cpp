class Solution {
public:
    int findComplement(int num) {
        // vector<int> x;
        // int y = num;
        // while(y >= 2){
        //     x.push_back(y%2);
        //     y = y/2;
        // }
        // x.push_back(y);
        // for(int i = 0;i<x.size();i++){
        //     if(x[i]==0)x[i]=1;
        //     else x[i]=0;
        // }
        // long long sum=0;
        // long long k = 1;
        // for(int i = 0;i<x.size();i++){
        //     sum+=x[i]*k;
        //     k = k*2;
        // }
        // return sum;
        int y = num;
        long long x=0;
        long long z=1;
        while(y > 0){
            int bit = y%2;
            if(bit==0){
                x+=z;
            }
            y/=2;
            z*=2;
        }
        return x;
    }
};