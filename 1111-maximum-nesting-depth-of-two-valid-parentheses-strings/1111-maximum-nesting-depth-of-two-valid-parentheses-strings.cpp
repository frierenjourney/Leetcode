class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> x;
        int depth = -1;
        for(int i=0;i<seq.size();i++){
            if(seq[i]=='('){
                depth++;
                x.push_back(depth);
            }
            else{
                depth--;
                x.push_back(depth+1);
            }
        }
        bool k = true;
        for(int i=0;i<x.size();i++){
            if(x[i]>1){
                for(int j=i+1;j<x.size();j++){
                    if(x[i]==x[j]){
                        if(k == true){
                            x[i]=0;
                            x[j]=0;
                            k=false;
                        }
                        else{
                            x[i]=1;
                            x[j]=1;
                            k=true;
                        }
                    }
                }
            }
        }
        return x;
    }
};