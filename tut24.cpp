#include<iostream>
using namespace std;

class Employee{
    int id;
   static int count;
    public:
        void setData(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
              count++;
        }
        void getData(void){
            cout<<"The id of this employee is "<<id<<" and the employee number is "<< count<<endl;
        }

        static void getCount(void){
            cout<<"This is the count of Employee: "<<count<<endl;
        }
};

int Employee :: count=1000;
int main(){
    Employee harry,lokesh,rekha;
    harry.setData();
    harry.getData();
    Employee::getCount();

    lokesh.setData();
    lokesh.getData();
    Employee::getCount();

    rekha.setData();
    rekha.getData();
    Employee::getCount();
    return 0;
}