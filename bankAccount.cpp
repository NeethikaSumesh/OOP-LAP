/*OOPS LAB_CYCLE 1_PROGRAM 3*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Bank{
    private:
        std::string name;
        std::string type;
        long int account_no;
        double balance;
    public:
        void initilization();
        void checkBalance();
        void withdraw();
        void deposit();
};

void Bank::initilization(){
    name="Neethika Sumesh";
    account_no=9999999;
    type="savings";
    balance =500;
}

void Bank::checkBalance(){
    cout<<"\nName : "<<name <<endl;
    cout<<"Balance of your account is : "<<balance<<endl;

}
void Bank::withdraw(){
    int amount;
    checkBalance();
    cout<<"Enter amount wanted to withdraw:";
    cin>>amount;

    if(balance==0){
        cout<<"CANNOT WITHDRAW"<<endl;
    }else if(amount>balance){
         cout<<"CANOOT WITHDRAW"<<endl;
    } else{
        balance -= amount;
        checkBalance();
    }
    
}

void Bank::deposit(){
    int amount;
    cout<<"Enter amount wanted to deposit:";
    cin>>amount;
    balance += amount;

    checkBalance();
}

int main(){
    int choice,option;
    Bank user1;
    user1.initilization();
    
    do{
        cout<<"Please select an option: "<<endl;
        cout<<"\n\t Enter 1 for deposit "<<endl;
        cout<<"\t Enter 2 for check balance and withdraw"<<endl;
        cout<<"\t Enter 3 for check balance\n Enter the option here:";
        cin>>choice;
        switch(choice){
        case 1: 
            user1.deposit();
            break;
        case 2:
            user1.withdraw();
            break;
        case 3:
            user1.checkBalance();
            break;
        default:
            cout<<"Invalid entry:";
            break;
        }

        cout<<"Do you want to continue? if yes enter 1 here: ";
        cin>>option;
    }while(option==1);
    
    return 0;
}
