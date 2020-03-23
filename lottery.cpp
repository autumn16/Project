#include <iostream>

using namespace std;

struct check{
    int day;
    int month;
    int year;
    int value;
};

bool isJackPot(int wday, int wmonth, int wyear, int wvalue, int cday, int cmonth, int cyear, int cvalue){
    if(cday==wday and cmonth==wmonth and cyear==wyear and cvalue==wvalue){
        return true;
    } return false;
}
bool isConsolation(int wday, int wmonth, int wyear, int wvalue, int cday, int cmonth, int cyear, int cvalue){
     if(cday==wday and cmonth==wmonth and cyear==wyear){
         string ws = to_string(wvalue);
         string cs = to_string(cvalue);
         int check = 0;
         for(int i=0; i<ws.length(); i++){
             if(cs[i]!=ws[i]) check++; 
         }
         if(check==1) return true;
         else return false;
     } return false;
}
int main(){
    int day;
    int month;
    int year;
    int value;
    cin >> day >> month >> year >> value;
    int num;
    cin >> num;
    int cday[num];
    int cmonth[num];
    int cyear[num];
    int cvalue[num];
    for(int i=0; i<num; i++){
        cin >> cday[i] >> cmonth[i] >> cyear[i] >> cvalue[i];
    }
    for(int i=0; i<num; i++){
        if(isJackPot(day,month,year,value,cday[i],cmonth[i],cyear[i],cvalue[i])==true){
            cout << "JACKPOT";
            return 0;
        }
        if(isConsolation(day,month,year,value,cday[i],cmonth[i],cyear[i],cvalue[i])==true){
            cout << "CONSOLATION";
            return 0;
        }
        if(i==num-1 and isJackPot(day,month,year,value,cday[i],cmonth[i],cyear[i],cvalue[i])==false and isConsolation(day,month,year,value,cday[i],cmonth[i],cyear[i],cvalue[i])==false){
            cout << "GOODLUCK";
            return 0;
        }
    }
    return 0;
}