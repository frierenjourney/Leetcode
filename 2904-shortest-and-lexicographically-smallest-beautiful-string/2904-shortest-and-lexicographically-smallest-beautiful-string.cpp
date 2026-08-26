class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        string ans = "";

        for(int i = 0; i < s.size(); i++) {

            int count = 0;

            for(int j = i; j < s.size(); j++) {

                if(s[j] == '1') {
                    count++;
                }

                if(count == k) {

                    string temp = s.substr(i, j - i + 1);

                    if(ans == "" ||
                       temp.size() < ans.size() ||
                       (temp.size() == ans.size() && temp < ans)) {
                        ans = temp;
                    }

                    // No need to continue this starting position
                    break;
                }
            }
        }

        return ans;
    }
};