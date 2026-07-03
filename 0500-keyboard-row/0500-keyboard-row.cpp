class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> x;
        for(int i=0;i<words.size();i++){
            int j=0;
            int ans1=0;
            int ans2 =0;
            int ans3 =0;
            while(j<words[i].size()){
                if(words[i][j] == 'q' || words[i][j] == 'w' ||words[i][j] == 'e' ||words[i][j] == 'r' ||words[i][j] == 't' ||words[i][j] == 'y'||words[i][j] == 'u'||words[i][j] == 'i'||words[i][j] == 'o'||words[i][j] == 'p'||words[i][j] == 'Q' || words[i][j] == 'W' ||words[i][j] == 'E' ||words[i][j] == 'R' ||words[i][j] == 'T' ||words[i][j] == 'Y'||words[i][j] == 'U'||words[i][j] == 'I'||words[i][j] == 'O'||words[i][j] == 'P'){
                    ans1++;
                    if(ans1!=j+1){
                        break;
                    }
                    else{
                        if(ans1==words[i].size()){
                            x.push_back(words[i]);
                        }
                        j++;
                    }
                }
                if(words[i][j] == 'a' || words[i][j] == 's' ||words[i][j] == 'd' ||words[i][j] == 'f' ||words[i][j] == 'g' ||words[i][j] == 'h'||words[i][j] == 'j'||words[i][j] == 'k'||words[i][j] == 'l'||words[i][j] == 'A' || words[i][j] == 'S' ||words[i][j] == 'D' ||words[i][j] == 'F' ||words[i][j] == 'G' ||words[i][j] == 'H'||words[i][j] == 'J'||words[i][j] == 'K'||words[i][j] == 'L'){
                    ans2++;
                    if(ans2!=j+1){
                        break;
                    }
                    else{
                        if(ans2==words[i].size()){
                            x.push_back(words[i]);
                        }
                        j++;
                    }
                }
                if(words[i][j] == 'z' || words[i][j] == 'x' ||words[i][j] == 'c' ||words[i][j] == 'v' ||words[i][j] == 'b' ||words[i][j] == 'n'||words[i][j] == 'm'||words[i][j] == 'Z' || words[i][j] == 'X' ||words[i][j] == 'C' ||words[i][j] == 'V' ||words[i][j] == 'B' ||words[i][j] == 'N'||words[i][j] == 'M'){
                    ans3++;
                    if(ans3!=j+1){
                        break;
                    }
                    else{
                        if(ans3==words[i].size()){
                            x.push_back(words[i]);
                        }
                        j++;
                    }
                }

            }
        }
        return x;
    }
};