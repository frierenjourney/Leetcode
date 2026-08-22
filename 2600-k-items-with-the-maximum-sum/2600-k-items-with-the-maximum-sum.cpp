class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int x = 0;
        if(k-numOnes>0){
            x+=numOnes;
            k=k-numOnes;
        }
        else return k;
        if(k-numZeros>0){
            k = k - numZeros;
            if(k==0)return x;
        }
        else return x;
        return x-k;
    }
};