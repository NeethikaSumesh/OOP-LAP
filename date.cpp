/*OOPS LAB_CYCLE 1_PROGRAM 2*/

#include<iostream>
using namespace std;

class date{
      private:
         int day,month,year;
      public:
         void inputDate(){
            cout<<"Enter the day dd: ";
            cin>>day;
            cout<<"Enter the month mm: ";
            cin>>month;
            cout<<"Enter the year yyyy: ";
            cin>>year;
         }
         bool validityCheck(){
            int nxt_day,nxt_month,nxt_year;

            if(year<0)
            return false;
            if (month < 1 || month > 12 )
            return false;
            if (day < 1 || day > 31)
            return false;
            if ( (day==31) && (month==2 || month==4 || month==6 || month==9 || month==11) )
            return false;
            if ( (day==30) && (month==2) )
            return false;
            if ( (month==2) && (day==29) && (year%4!=0) )
            return false;
            if ( (month==2) && (day==29) && (year%400==0) )
            return true;
            if ( (month==2) && (day==29) && (year%100==0) )
            return false;
            if ( (month==2) && (day==29) && (year%4==0)  )
            return true;
            if(year < -1 )
            return false;
         
         return true;
               }


         void nxtDate(){
            int nxtDay=0,nxtMonth=0,nxtYear=0;

            if((day>=1 && day<28)){ 
               nxtDay=day+1;
               nxtMonth=month;
               nxtYear=year; 
            }
            else if((day==31)&&(month==1||month==3||month==5||month==7||month==8||month==10||month==12)){ 
               nxtDay=1;
               if(month==12){
                  nxtMonth=1;
                  nxtYear=year+1; }
               else{
                  nxtMonth=month+1;
                  nxtYear=year; 
                  }
            }
            else if((month==2)&&(day<30)){
               if((year%4==0 && day==29) || (year%4!=0 && day==28)){
                  nxtDay=1;
                  nxtMonth=3;
                  nxtYear=year; 
               }
               else if(day<29){
                  nxtDay=day+1;
                  nxtMonth=2;
                  nxtYear=year; }
            }
            else if((day==30)&&(month==4||month==6||month==9||month==11)){
               nxtDay=1;
               nxtMonth=month+1;
               nxtYear=year;
            }
            else if((month<13&&day<31)&&(month!=2)){
               nxtDay=day+1;
               nxtMonth=month;
               nxtYear=year;
            }
            cout<<"\n\nThe next date is: "<<nxtDay<<"/"<<nxtMonth<<"/"<<nxtYear;
         }
            
   };
  
  
int main(){
    date d;
    d.inputDate();
   if(d.validityCheck()){
       cout<<"The entered date is valid";
       d.nxtDate();
   }else{
       cout<<"The Date is invalid";
   }

    return 0;
}
