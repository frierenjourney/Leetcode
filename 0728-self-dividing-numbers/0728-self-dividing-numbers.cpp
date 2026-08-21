class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> x;
        int z=0;
        for(int i=left;i<=right;i++){
            int n = i;
            while(n>0){
                int k = n%10;
                if(k==0 || i%k!=0){
                    z=1;
                break;
                }
                n = n/10;
            }
            if(z==0)x.push_back(i);
            else z=0;
        }
        return x;
    }
};