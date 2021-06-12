#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

   
    void printComplex(void)
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int main(){
    
    return 0;
}