class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumeven = 0;
        int sumodd = 0;
        int x = n;
        int i = 1;
        while(x<n){
            if(i%2==0){
                sumeven+=i;
                x++;
            }
            else{
                sumodd+=i;
            }
        }
        return n;
    }
};