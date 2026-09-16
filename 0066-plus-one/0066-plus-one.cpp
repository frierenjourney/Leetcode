class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        vector<int> x(digits.size()+1,0);
        x[0]=1;
        return x;
//         int n=digits.size()-1;
//         if(digits[n]!=9){
//             digits[n]++;
//         }
//         else{
//             while(n>=0 && digits[n]==9){
//                 digits[n]=0;
//                 n--;
//             }
//             if(n>=0){
//     digits[n]++;
// }
// else{
//     digits.insert(digits.begin(),1);
// }
//         }
//         return digits;
    }
};