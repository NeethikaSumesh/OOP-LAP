#include<iostream>
using namespace std;


class Employee{
    protected:
        char name[20];
        int emp_no;
        float pay_rate=0,balance=0;

    public:
        void setData(){
            cout<<"Enter name of employee: ";
            cin.get(name,20);
            cout<<"Enter employee no.: ";
            cin>>emp_no;
            cout<<"Enter employee salary: ";
            cin>>pay_rate;
        }
        void pay(){
            balance+=pay_rate;
        }
        void display(){
            cout<<endl<<"Name: "<<name<<endl;
            cout<<"Employee no.: "<<emp_no<<endl;
            cout<<"Salary: "<<pay_rate<<endl;
            cout<<"Amount Paid: "<<balance<<endl;
        }
    
};

class Manager:public Employee{
    bool issalaried=false;
    float no_of_hrs=0;
    public:
        void setManagerData(){
            int choice;
            setData();
            cout<<"Pay on hourly or salary basis(0 for hourly,1 for salary basis): ";
            cin>>choice;
            cin.ignore();
            switch (choice)
            {
                case 0:
                    issalaried=false;
                    break;
                case 1:
                    issalaried=true;
                    break;
                default:
                    cout<<"Some error occured try again";
                    break;
             }
        }

        void pay(){
            if(issalaried){
                balance+=pay_rate;
            }else{
                cout<<"Enter number of hours worked: ";
                cin>>no_of_hrs;
                balance=no_of_hrs*pay_rate;

            }
        }
};

class Supervisor:public Employee{
    char department[20];
    public:
    void setSupervisorData(){
        setData();
        cin.ignore();
        cout<<"Enter Department: ";
        cin.get(department,20);
    }

    void pay(){
        balance+=pay_rate;

    }
    void display(){
        Employee::display();
        cout<<"Department: "<<department<<endl;

    }



};
int main(){
    Supervisor s;
    Manager m;
    int choice;
    cout<<"Select Employee Category: "<<endl<<"1.Manager"<<endl<<"2.Supervisor"<<endl<<"3.Exit"<<endl<<"Enter choice: ";
    cin>>choice;
    cin.ignore();
    switch(choice){
        case 1:
            m.setManagerData();
            m.pay();
            m.display();
            break;
        case 2:
            s.setSupervisorData();
            s.pay();
            s.display();
            break;
        case 3:
            break;
        default:
            cout<<"Some error occured";

    }
    
    

    

    return 0;
    
}
