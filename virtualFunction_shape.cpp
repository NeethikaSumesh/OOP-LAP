#include<iostream>
#include<math.h>
#include<string>
using namespace std;


class Shape{
    protected:
        float side[100],area,perimeter;
    public:
       

        Shape(int n){
            for(int i=0;i<n;i++){
                cout<<"Enter side "<<i+1<<" value: ";
                cin>>side[i];
            }
        }
        virtual void calcArea()=0;
        virtual void calcPerimeter()=0;

        void display(string shape_name){
            cout<<endl<<"Area of "<<shape_name<<" is : "<<area<<endl;
            cout<<endl<<"Perimeter of "<<shape_name<<" is : "<<perimeter<<endl;

        }
};

class Triangle:public Shape{
    float s=0;
    public:
        Triangle():Shape(3){
        }
        bool validate(){
             if((side[0]+side[1])<=side[2]||(side[1]+side[2])<=side[0]||(side[2]+side[0])<=side[1]){
                return false;
            }else{
                return true;
            }
        }
        void calcArea(){
                 s=(side[0]+side[1]+side[2])/2;
                 area=sqrt(s*(s-side[0])*(s-side[1])*(s-side[2]));   
        }
        void calcPerimeter(){
               perimeter=side[0]+side[1]+side[2];
            }
};
class Square:public Shape{
    float s=0;
    public:
        Square():Shape(1){
        }
        void calcArea(){
           
            area=side[0]*side[0];
        }
        void calcPerimeter(){
               perimeter=3*side[0];
            }
};
class Rectangle:public Shape{
    public:
        Rectangle():Shape(2){
        }
        void calcArea(){
            
            area=side[0]*side[1];
        }
        void calcPerimeter(){
               perimeter=2*(side[0]+side[1]);
        }
};
class Circle:public Shape{
    float s=0;
    public:
        Circle():Shape(1){
        }
        void calcArea(){
            area=side[0]*side[0]*3.14;
        }
        void calcPerimeter(){
               perimeter=2*3.14*side[0];
            }
};

int main(){
    Shape *sh;
    cout<<endl<<"Triangle"<<endl;
    Triangle t;
    sh=&t;
    if(t.validate()){
        sh->calcArea();
        sh->calcPerimeter();
        sh->display("Triangle");
    }else{
        cout<<"Triangle is not valid";
    }

    cout<<endl<<"Rectangle"<<endl;
    Rectangle r;
    sh=&r;
    sh->calcArea();
    sh->calcPerimeter();
    sh->display("Rectangle");

    cout<<endl<<"Square"<<endl;
    Square s;
    sh=&s;
    sh->calcArea();
    sh->calcPerimeter();
    sh->display("Square");

    cout<<endl<<"Circle"<<endl;
    Circle c;
    sh=&c;
    sh->calcArea();
    sh->calcPerimeter();
    sh->display("Circle");

    return 0;
}
