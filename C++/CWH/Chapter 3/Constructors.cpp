#include <iostream>

using namespace std;

class Complex
{
    private:
        int a,b;

    /* Creating a constructor (they are used when you want to do something as soon as an object of that class is created)

    1) Constructor is a special memeber function with the same name as of the class. 
    2) It is automatically invoked whenever an object is created
    3) It is used to initialize the objects of its class
    4) They do not have return types and they cannot return values
    5) A constructor which doesn't take any parameter is called defalut constructor
    6) Constructors should be declared in the public section of the class
    7) We cannot refer to their address
    
    */

public:
    Complex(void);          // Constructor declaration

    void printNum()
    {
        cout << "Your complex number is ---> " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void)
{
    a = 0;
    b = 0;
    cout<<"Object is created"<<endl;
}

int main()
{
    Complex comp1,comp2,comp3;

    comp1.printNum();
    comp2.printNum();
    comp3.printNum();

    return 0;
}