#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);

    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "The price of item with id " << itemId[i] << " is " << ItemPrice[i] << endl;
    }
    cout << endl;
}

int main()
{
    Shop dukan;
    dukan.initCounter(); //it is main
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();

    dukan.displayPrice();
    return 0;
}