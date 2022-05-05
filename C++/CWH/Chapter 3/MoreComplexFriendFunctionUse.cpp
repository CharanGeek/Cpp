#include <iostream>

using namespace std;

// Forward declaration
class c2;

class c1
{
    int val1;

    public:
        void inpData(int a)
        {
            val1 = a;
        }

        void showData()
        {
            cout<< val1 <<endl;
        }

        friend void exchangePrivateVal(c1 &, c2 &);

};

class c2
{
    int val2;

    public:
        void inpData(int b)
        {
            val2 = b;
        }

        void showData()
        {
            cout<< val2 << endl;
        }

        friend void exchangePrivateVal(c1 &, c2 &);
};

void exchangePrivateVal(c1 &a, c2 &b)
{
    int temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}

int main()
{
    c1 obj1;
    obj1.inpData(25);

    c2 obj2;
    obj2.inpData(56);

    cout<<"The value of val1 in c1 class before swap is: ";
    obj1.showData();

    cout<<"The value of val2 in c2 class before swap is: ";
    obj2.showData();

    exchangePrivateVal(obj1, obj2);

    cout<<"The value of val1 in c1 class after swap is: ";
    obj1.showData();

    cout<<"The value of val2 in c2 class after swap is: ";
    obj2.showData();

    return 0;
}