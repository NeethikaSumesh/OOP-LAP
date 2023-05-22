/*OOPS LAB_CYCLE 1_PROGRAM 1*/

#include <iostream>
using namespace std;

struct Phone{
     long int area_code,exchange,number;  
};

int main(){
    
    Phone phone1,phone2;
    
    phone1.area_code = 212;
    phone1.exchange = 767;
    phone1.number = 8900;

    cout<<"Enter the area code,the exchange and the number:"<<endl;
    cin>>phone2.area_code>>phone2.exchange>>phone2.number;
    
    cout<<"My  number is "<<"("<<phone1.area_code<<") "<<phone1.exchange<<"-"<<phone1.number<<endl;
    cout<<"Your  number is "<<"("<<phone2.area_code<<") "<<phone2.exchange<<"-"<<phone2.number<<endl;
    return 0;
}
