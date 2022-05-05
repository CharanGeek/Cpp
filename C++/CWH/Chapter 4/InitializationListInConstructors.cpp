#include <iostream>

using namespace std;

/*
Syntax for initialization list in constructor:

constructor (arguement-list) : initialization-section
{
    assignment + other code
}


--------EXAMPLE--------

class Test
{
    int a,b;

    public:
        Test(int i, int j) : a(i), b(j)
        {
            -------- Using a(i) will assign the value of 'i' to variable 'a' --------

            constructor-body
        }
};
*/

class Test
{
    int x;
    int y;

    public:
        // Use Cases:

        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(2*j)
        // Test(int i, int j) : a(i), b(a*j)
        // Test(int i, int j) : y(j), x(1+y)        --> This will create problem because since x is initialized first so it'll assign the value of x first and since y is not declared till now therefore the value of x will be 1
        Test(int i, int j) : y(j), x(i+y)
        {
            cout<<"-----------------Constructor executed!-----------------"<<endl;
            cout<<"The value of y is: "<<y<<endl;
            cout<<"The value of x is: "<<x<<endl;
        }
};

int main()
{
    Test ob(70,60);

    return 0;
}