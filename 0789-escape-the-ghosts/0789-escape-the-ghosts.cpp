class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int n = ghosts.size();
        int x = abs(0-target[0])+abs(0-target[1]);
        for(int i=0;i<n;i++){
            int a = abs(target[0]-ghosts[i][0]);
            int b = abs(target[1]-ghosts[i][1]);
            if(x>=(a+b)) return false;
        }
        return true;
    }
};