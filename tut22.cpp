//OOPs -> Classes and objects

//C++ initially called --> C with classed by stroustroup
//class --> extension f structures in c
// struchtures had limitations
//      -->members are public
//      --> no methods
//classes--> structures +more
//classes --> can have methods and properties
//classes --> can make few members as private and few as public
//stuctures in c++ are typedefed
//you can declare objects along with the class declartion
/* class Employee{

     }harry, rohan, lokesh;*/
//harry.salary =8 makes no sence if salary is private

//nesting of members functios

#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        {
            /* code */
        }
    }
}

void binary ::ones(void)

{

    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{

    cout << "Display your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        cout << s.at(i);
    }

    cout << endl;
}

int main()
{

    binary b;
    b.read();
    b.display();

    b.ones();
    b.display();
    return 0;
}