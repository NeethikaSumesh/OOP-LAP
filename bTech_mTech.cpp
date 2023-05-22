#include <iostream>
using namespace std;

class Student{
    protected:
    string name;
    int age;
    int reg_No;
    public:
    virtual void sort(int studentNo) = 0;

};

class BTechStud : public Student{
    float marks;
    public:
    void input(){
        cout<<" Enter the name: ";
        cin>>name;
        cout<<" Enter Age: ";
        cin>>age;
        cout<<" Enter Register No: ";
        cin>>reg_No;
        cout<<" Enter Total Mark: ";
        cin>>marks;
    }
    void sort(int studentNo);
    
};
 static BTechStud bstudent[10];
 void BTechStud :: sort(int studentNo){
        for(int i = 0;i<studentNo;i++){
            BTechStud temp;
            for(int j = i+1;j<studentNo;j++){
                if(bstudent[i].marks > bstudent[j].marks){
                    temp = bstudent[i];
                    bstudent[i] = bstudent[j];
                    bstudent[j] = temp;

                }
            }
        }
        cout<<"\nName\tAge\tRegister No\tMark\n";
        for(int i = 0;i<studentNo;i++){
            cout<<bstudent[i].name<<"\t"<<bstudent[i].age<<"\t"<<bstudent[i].reg_No<<"\t\t"<<bstudent[i].marks<<"\n";
        }
       
    }
    class MTechStud : public Student{
        float gpa;
        public:
         void input(){
        cout<<" Enter the name: ";
        cin>>name;
        cout<<" Enter Age: ";
        cin>>age;
        cout<<" Enter Register No: ";
        cin>>reg_No;
        cout<<" Enter Total GPA: ";
        cin>>gpa;
    }
    void sort(int studentNo);

    };
    MTechStud mstudent[5];

     void MTechStud :: sort(int studentNo){
        for(int i = 0;i<studentNo;i++){
            MTechStud temp;
            for(int j = i+1;j<studentNo;j++){
                if(mstudent[i].gpa > mstudent[j].gpa){
                    temp = mstudent[i];
                    mstudent[i] = mstudent[j];
                    mstudent[j] = temp;

                }
            }
        }
        cout<<"\nName\tAge\tRegister No\tGPA\n";
        for(int i = 0;i<studentNo;i++){
            cout<<mstudent[i].name<<"\t"<<mstudent[i].age<<"\t"<<mstudent[i].reg_No<<"\t\t"<<mstudent[i].gpa<<"\n";
        }
       
    }

int main(){
    int bstudentNo;
    cout<<"Enter the number of Btech students : ";
    cin>>bstudentNo;
    for(int i = 0;i<bstudentNo;i++){
        bstudent[i].input();
    }
    Student* student = new BTechStud();
    student->sort(bstudentNo);
     int mstudentNo;
    cout<<"\nEnter the number of Mtech Students : ";
    cin>>mstudentNo;
    for(int i = 0;i<mstudentNo;i++){
        mstudent[i].input();
    }
    student = new MTechStud();
    student->sort(mstudentNo);
}


