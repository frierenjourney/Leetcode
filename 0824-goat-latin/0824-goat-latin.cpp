class Solution {
public:
    string toGoatLatin(string sentence) {
        string x;
        stringstream ss(sentence);
        string word;
        string k = "a";
        while(ss>>word){
        char ch = tolower(word[0]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                x.append(word);
                x += "ma";
            }
            else{
                x += word.substr(1);
                x.push_back(word[0]);
                x += "ma";
            }
            x += k;
            k += "a";
            x += " ";
        }
        x.pop_back();
        return x;
    }
};