#include <iostream>

using namespace std;

// Forward Declaration (this is like a function template but for class)
class Complex;

class Calculator
{
    public:
        int add(int a , int b)
        {
            return a+b;
        }

        // Using a function template and we'll write the content later since the Complex hasn't yet been declared
        int sumRealOfComplex(Complex, Complex);
        int sumCompOfComplex(Complex, Complex);

        // Imagine, if you had to make 13 functions like this, then you'd have to make so many friend functions. This is where the friend classes come into play
};

class Complex
{
    int a,b;

    // Making sumRealOfComplex function a friend function of Complex class
    /* 
    friend int Calculator :: sumRealOfComplex(Complex obj1, Complex obj2);
    friend int Calculator :: sumCompOfComplex(Complex obj1, Complex obj2);
    */


    // Declaring the entire class as Friend of Calculator class
    friend class Calculator;

    public:
        void setNum(int n1, int n2)
        {
            a = n1;
            b = n2;
        }    

        void displayNum()
        {
            cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumRealOfComplex(Complex obj1, Complex obj2)
{
    return (obj1.a + obj2.a);
}

int Calculator :: sumCompOfComplex(Complex obj1, Complex obj2)
{
    return (obj1.b + obj2.b);
}

int main()
{
    Complex o1,o2;
    o1.setNum(42,9);
    o1.displayNum();

    o2.setNum(64,13);
    o2.displayNum();

    Calculator calc1;

    int resReal = calc1.sumRealOfComplex(o1,o2);
    cout<<"The sum of real part of your complex numbers is: "<<resReal<<endl;

    int resComplex = calc1.sumCompOfComplex(o1,o2);
    cout<<"The sum of complex part of your complex numbers is: "<<resComplex<<endl;

    return 0;
}