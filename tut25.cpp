#include<iostream>
using namespace std;

class Employee{
int id;
int salary;
public:
    void setId(void){
        salary=30000;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }

    void getId(void){
        cout<<"The id of the employee is "<<id<<endl;
    }
};
int main(){
    
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
        /* code */
    }
    
    return 0;
}