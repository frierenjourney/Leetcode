class Solution {
public:
    bool judgeCircle(string moves) {
        int L=0;
        int R=0;
        int U=0;
        int D=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L')L++;
            else if(moves[i]=='R')R++;
            else if(moves[i]=='U')U++;
            else D++;
        }
        bool x = true;
        if((abs(L-R)+abs(U-D))!=0)x=false;
        return x;
    }
};