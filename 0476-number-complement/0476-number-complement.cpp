class Solution {
public:
    int findComplement(int num) {
        vector<int> x;
        int y = num;
        while(y >= 2){
            x.push_back(y%2);
            y = y/2;
        }
        x.push_back(y);
        for(int i = 0;i<x.size();i++){
            if(x[i]==0)x[i]=1;
            else x[i]=0;
        }
        long long sum=0;
        long long k = 1;
        for(int i = 0;i<x.size();i++){
            sum+=x[i]*k;
            k = k*2;
        }
        return sum;
    }
};