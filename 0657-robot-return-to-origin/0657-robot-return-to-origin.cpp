class Solution {
public:
    bool judgeCircle(string moves) {
        int verticle=0;
        int horizontal=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L')horizontal++;
            else if(moves[i]=='R')horizontal--;
            else if(moves[i]=='U')verticle++;
            else verticle--;
        }
        bool x = true;
        if(abs(verticle)+abs(horizontal)!=0)x=false;
        return x;
    }
};