#include <iostream>
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

    friend complex sumComplex(complex o1, complex o2);
    void printComplex(void)
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;

    c1.setNumber(1, 2);
    c1.printComplex();

    c2.setNumber(3, 4);
    c2.printComplex();

    sum = sumComplex(c1, c2);
    sum.printComplex();

    return 0;
}

/*Properties of friend functions
1. NOt in the scope of the class
2.since it is not in the scope of the class, it cannot be called fro the object of that class. c1.sumComplex() ==Invalid
3. Cam be invoked without help of any object
4. Usually containsthe objects as arguments
5. Can be declared insice public or private section of the class.
6. It cannot access the menbers directly by their names and need object_name.member_name to access any member.

*/