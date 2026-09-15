class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a = (ax2-ax1)*(ay2-ay1);
        int b = (bx2-bx1)*(by2-by1);
        bool x = false;
        if(ax2<=bx1 || ay2<=by1 || bx2<=ax1 || by2<=ay1)
            x = false;
        else
            x = true;
        int cx1=0,cy1=0,cx2=0,cy2=0;
        if(x==true){
        if(ax1<bx1){
            if(ay1>by1){
                cy1=ay1;
            }
            else{
                cy1=by1;
            }
            cx1=bx1;
        }
        else{
            if(ay1>by1){
                cy1=ay1;
            }
            else{
                cy1=by1;
            }
            cx1=ax1;
        }
        if(ax2<bx2){
            if(ay2>by2){
                cy2=by2;
            }
            else{
                cy2=ay2;
            }
            cx2=ax2;
        }
        else{
            if(ay2>by2){
                cy2=by2;
            }
            else{
                cy2=ay2;
            }
            cx2=bx2;
        }
        }
        else return a+b;
        int inter = {abs(cx2-cx1)*abs(cy2-cy1)};
        return a+b-inter;
    }
};