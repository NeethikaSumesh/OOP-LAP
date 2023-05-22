/*OOPS LAB_CYCLE 2_PROGRAM 1*/

#include <iostream>
using namespace std;

class Solution
{
private:
    static int array[50];
    static int size;
    
public:

    void input(){
        cout<<"Enter size of array";
        cin>>size;
        cout<<"Enter array elements :";
        for(int i=0;i<size;i++){
            cin>>array[i];
        }

    }

    void static average(){
        float  sum =0;
        float avg =0;
        for(int i=0;i<size;i++){
            sum += array[i];
            
        }
       
        cout<<"Average of elements = "<<(sum/size)<<endl;
    }
    void multiplier(int k){
        for(int i=0;i<size;i++){
            array[i] = array[i]*k;
        }
        
    }
    void display(){
        cout<<"Array elements are "<<endl;
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ,";
        }
        cout<<endl;
    }
    void sort(){
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(array[i]>array[j]){
                    
                    int temp = array[i];
                    array[i]=array[j];
                    array[j]=temp;
                   
                }
            }
        }

        display();
    }
    
};
int Solution::array[];
int Solution::size;


int main(){
    int multi;
    Solution obj1;
    Solution obj2;
    Solution obj3;

  

    
    obj1.input();
    obj1.average();
    cout<<"Enter the multiplier : ";
    cin>>multi;
    obj2.multiplier(multi);
    obj1.average();
    obj3.sort();
    

    return 0;
    
}
