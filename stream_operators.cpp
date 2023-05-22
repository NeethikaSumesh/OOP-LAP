#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imaginary;
    public:
        friend ostream& operator<<(ostream& out, Complex& c);
        friend istream & operator >> (istream &in,  Complex &c);
};
ostream& operator<<(ostream& out, Complex& c){
    out<<c.real<<"+"<<c.imaginary<<"i"<<endl;

    return out;
}

istream& operator >>(istream &in,Complex &c){
    cout<<"Enter Real part:";
    in>>c.real;
    cout<<"Enter Imaginary Part:";
    in>>c.imaginary;

    return in;
}

int main(){

    Complex c1;

    cin>>c1;
    cout<<"Complex Number is :";
    cout<<c1;
    return 0;
}
