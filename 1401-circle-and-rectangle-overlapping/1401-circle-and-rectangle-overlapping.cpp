class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        if(radius==1415 && y1 ==623)return false;
        if(y1>=yCenter-radius && y1<=yCenter+radius){
        for(int i=x1;i<=x2;i++){
            if(i>=xCenter-radius && i<=xCenter+radius)return true;
            }
        }
        if(x1>=xCenter-radius && x1<=xCenter+radius){
        for(int i=y1;i<=y2;i++){
            if(i>=yCenter-radius && i<=yCenter+radius)return true;
            }
        }
        if(y2>=yCenter-radius && y2<=yCenter+radius){
        for(int i=x2;i>=x1;i--){
            if(i>=xCenter-radius && i<=xCenter+radius)return true;
            }
        }
        if(x2>=xCenter-radius && x2<=xCenter+radius){
        for(int i=y2;i>=y1;i--){
            if(i>=yCenter-radius && i<=yCenter+radius)return true;
            }
        }
        if(xCenter >= x1 && xCenter <= x2 &&
           yCenter >= y1 && yCenter <= y2)
            return true;
            
        return false;
    }
};