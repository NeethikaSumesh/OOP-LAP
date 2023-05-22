#include <iostream>
using namespace std;

class Distance{
    private:
        float feet;
        float inch;
    public:
        void setData();
        void display();
        void operator < (Distance a);
        friend Distance operator +(Distance a, Distance b);
};

void Distance::setData(){
    
    cout<<"Enter distance:\nin Feet: ";
    cin>>feet;
    cout<<"In Inch: ";
    cin>>inch;
    
}

void Distance::display(){
    cout<<"Final Distance : ";
    cout<<feet<<" feet and "<<inch<<" Inche"<<endl;
}

void Distance::operator<(Distance a){
    if(a.feet>feet){

      cout<<"Second distance is greater than first distance";
  }
  else if(a.feet == feet && a.inch > inch ){
      cout<<"Second distance is greater than first distance";
  }
  else if(a.feet == feet && a.inch == inch){
      cout<<"Both are equal";
  }
  else{
      cout<<"First distance is greater than second distance";
  }
    
}

Distance operator +(Distance a,Distance b){
    Distance temp;

    temp.feet = a.feet + b.feet;
    temp.inch = a.inch + b.inch;
    if(a.inch + b.inch >= 12 ){
        temp.feet++;
        temp.inch = a.inch + b.inch - 12;
    }

     return temp;
}

int main(){

    Distance obj1,obj2,obj3;

    obj1.setData();
    obj2.setData();

    obj3 = obj1+obj2;
    obj3.display();
    obj1<obj2;

    return 0;
}
