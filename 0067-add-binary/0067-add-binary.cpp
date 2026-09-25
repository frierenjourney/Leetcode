class Solution {
public:

    string addBinary(string a, string b) {

        // int i = a.size() - 1;
        // int j = b.size() - 1;

        // int carry = 0;

        // string ans = "";

        // while(i >= 0 || j >= 0 || carry){

        //     int sum = carry;

        //     if(i >= 0){
        //         sum += a[i] - '0';
        //         i--;
        //     }

        //     if(j >= 0){
        //         sum += b[j] - '0';
        //         j--;
        //     }

        //     ans = char((sum % 2) + '0') + ans;

        //     carry = sum / 2;
        // }

        // return ans;
        string ans = "";
        int carry=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0 && j>=0){
            if(a[i]=='0' && b[j]=='0'){
                if(carry==0)ans.push_back('0');
                else {
                    ans.push_back('1');
                    carry=0;
                }
            }
            else if(a[i]=='1' && b[j]=='0' || a[i]=='0' && b[j]=='1'){
                if(carry==0)ans.push_back('1');
                else{
                    ans.push_back('0');
                }
            }
            else{
                if(carry==0){
                    ans.push_back('0');
                    carry = 1;
                }
                else{
                    ans.push_back('1');
                    carry = 1;
                }
            }
            i--;
            j--;
        }
        if(j>=0){
            while(j>=0){
                if(b[j]=='0'){
                    if(carry==0){
                        ans.push_back('0');
                    }
                    else{
                        ans.push_back('1');
                        carry = 0;
                    }
                }
                if(b[j]=='1'){
                    if(carry==0){
                        ans.push_back('1');
                    }
                    else{
                        ans.push_back('0');
                        carry = 1;
                    }
                }
                j--;
            }
        }
        else if(i>=0){
            while(i>=0){
                if(a[i]=='0'){
                    if(carry==0){
                        ans.push_back('0');
                    }
                    else{
                        ans.push_back('1');
                        carry = 0;
                    }
                }
                if(a[i]=='1'){
                    if(carry==0){
                        ans.push_back('1');
                    }
                    else{
                        ans.push_back('0');
                        carry = 1;
                    }
                }
                i--;
            }
        }
        if(carry == 1)
        ans.push_back('1');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
