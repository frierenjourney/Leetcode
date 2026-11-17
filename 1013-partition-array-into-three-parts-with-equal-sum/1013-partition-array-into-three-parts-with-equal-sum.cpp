class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum1 = 0;
        for(int i=0;i<arr.size()-2;i++){
            sum1+=arr[i];
            int sum2=0;
            int sum3=0;
            int k=i+1;
            for(int j=k;j<arr.size();j++){
                sum2+=arr[j];
                k=j;
                if(sum2==sum1)break;
            }
            if(k==arr.size()-1)continue;
            else{
                for(int j=k+1;j<arr.size();j++){
                sum3+=arr[j];
            }
            if(sum3==sum1)return true;
            }
        }
        return false;
    }
};