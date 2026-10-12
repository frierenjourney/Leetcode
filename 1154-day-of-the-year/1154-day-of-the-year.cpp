class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int x = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
    bool z=false;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))z = true;
    if(z==true){
        if(x==1)return day;
        else if(x==2)return day+31;
        else if(x==3)return day+60;
        else if(x==4)return day+91;
        else if(x==5)return day+121;
        else if(x==6)return day+152;
        else if(x==7)return day+182;
        else if(x==8)return day+213;
        else if(x==9)return day+244;
        else if(x==10)return day+274;
        else if(x==11)return day+305;
        else return day+335;
    }
    else{
        if(x==1)return day;
        else if(x==2)return day+31;
        else if(x==3)return day+59;
        else if(x==4)return day+90;
        else if(x==5)return day+120;
        else if(x==6)return day+151;
        else if(x==7)return day+181;
        else if(x==8)return day+212;
        else if(x==9)return day+243;
        else if(x==10)return day+273;
        else if(x==11)return day+304;
        else return day+334;
    }
    }
};