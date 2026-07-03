class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> x;
        int k=0;
        for(int i=0;i<operations.size();i++){
            int sum=0;
            if(operations[i]!="+" && operations[i]!="D" && operations[i]!="C"){
                x.push_back(stoi(operations[i]));
                k++;
            }
            else if(operations[i]=="+"){
                sum=x[k-2]+x[k-1];
                x.push_back(sum);
                k++;
            }
            else if(operations[i]=="D"){
                sum=2*x[k-1];
                x.push_back(sum);
                k++;
            }
            else if(operations[i]=="C") {
                x.pop_back();
                k--;
            }
        }
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=x[i];
        }
        return sum;
    }
};