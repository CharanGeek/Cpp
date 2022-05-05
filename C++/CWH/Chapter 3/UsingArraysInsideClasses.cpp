#include <iostream>

using namespace std;

/*

Memory allocation of objects in C++

In C++ when objects are created, if they use a common function(s) then that common function(s) 
will be stored only once and other variables which are different (like employeeName, age etc) will 
be stored again and again!

*/

class Shop
{
private:
    // Making integer arrays
    int itemID[100];
    int itemPrice[100];

    int count;

public:
    void initCounter(void);
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::initCounter(void)
{
    count = 0;
}

void Shop ::setPrice(void)
{
    cout << "Enter ID of the item number " << (count + 1) << " ---> ";
    cin >> itemID[count];

    cout << "Enter Price of the item number " << (count + 1) << " ---> ";
    cin >> itemPrice[count];

    cout << "------------------------------------------------" << endl;

    count++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "The Price of item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop ShyamMedics;
    ShyamMedics.initCounter();
    ShyamMedics.setPrice();
    ShyamMedics.setPrice();
    ShyamMedics.setPrice();

    ShyamMedics.displayPrice();
    return 0;
}