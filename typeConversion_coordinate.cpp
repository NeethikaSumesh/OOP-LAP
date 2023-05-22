#include <iostream>
#include <cmath>
using namespace std;;

class Polar{
    private:
        double radius;
        int angle;
    public:
        Polar();
        Polar(double radius,int angle){
            this->radius=radius;
            this->angle=angle;
        }
        double getRadius(){
            return radius;
        }
        int getAngle(){
            return angle;
        }
};

class Rectangluar{
    private:
        double x;
        double  y;
    public :
        void operator =(Polar);
        void display();

};

void Rectangluar::operator= (Polar p){
    double angleInRadian = p.getAngle()*(3.14/180);
    x =p.getRadius() * cos(angleInRadian);
    y =p.getRadius() * sin(angleInRadian);
}

void Rectangluar::display(){
    cout<<"Rectangluar Cooridnates are : "<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
    
    double r;
    int angle;

    cout<<"Enter the radius : ";
    cin>>r;
    cout<<"enter angle in degree:";
    cin>>angle;

    Polar p1(r,angle);

    Rectangluar r1;
    r1=p1;
    r1.display();
    return 0;
}
