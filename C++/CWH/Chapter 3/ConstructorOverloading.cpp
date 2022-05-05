#include <iostream>

using namespace std;

class Complex
{
    int a,b;

    // There can be multiple constructors in a class and constructor overloading works almost the same as function overloading
    public: 
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }

        Complex(int x)
        {
            a = x;
            b = 0;
        }

        Complex()
        {
            a = 0;
            b = 0;
        }

        void printNum()
        {
            cout << "Your complex number is ---> " << a << " + " << b << "i" << endl;
        }
};

int main()
{
    Complex c1(54,21);
    c1.printNum();

    Complex c2(14);
    c2.printNum();

    Complex c3;
    c3.printNum();
    
    return 0;
}