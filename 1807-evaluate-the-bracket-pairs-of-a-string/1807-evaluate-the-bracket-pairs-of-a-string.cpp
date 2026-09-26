class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string t = "";
        unordered_map <string,string> mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        } 
        int i=0;
        while(i<s.size()){
            if(s[i]!='('){
                t.push_back(s[i]);
            }
            else{
                i=i+1;
                string k = "";
                while(s[i]!=')'){
                    k.push_back(s[i]);
                    i++;
                }
                if(mp.find(k)!=mp.end()){
                    t+=mp[k];
                }
                else{
                    t+='?';
                }
            }
            i++;
        }
        // string t = "";
        // int i=0;
        // while(i<s.size()){
        //     if(s[i]!='('){
        //         t.push_back(s[i]);
        //     }
        //     else{
        //         i=i+1;
        //         string k = "";
        //         while(s[i]!=')'){
        //             k.push_back(s[i]);
        //             i++;
        //         }
        //         bool z = false;
        //         for(int j=0;j<knowledge.size();j++){
        //                 if(k==knowledge[j][0]){
        //                     t += knowledge[j][1];
        //                     z = true;
        //                 }
        //             }
        //         if(z==false)t+='?';
        //         }
        //     i++;
        //     }
        return t;
    }
};