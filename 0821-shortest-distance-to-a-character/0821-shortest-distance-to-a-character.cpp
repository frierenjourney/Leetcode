class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> x(s.size(),INT_MAX);
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                for(int j=k;j<=i;j++){
                        x[j]=(i-j);
                    }
                k=i+1;
                }
            }
        k=s.size()-1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==c){
                for(int j=i;j<=k;j++){
                        x[j]=min(x[j],abs(i-j));
                    }
                k=i-1;
                }
            }
        return x;
    }
};