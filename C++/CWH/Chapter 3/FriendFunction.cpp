#include <iostream>

using namespace std;

/*

Properties of Friend Functions

1) Not a member of class therefore it cannot be called by object of that class
2) Can be invoked without any object
3) Usually contains objects as arguements
4) The declaration of the friend function inside the class can be done in the both private and public
5) It can only access variables with the help of object. Example --> object_name.variable

*/

class ComplexNum
{
    int a, b;

public:
    // To declare a friend function just write the function template and add "friend" at the begining
    // A friend function can access that class's private data members and it isn't a member function of that class
    friend ComplexNum sumComplexNum(ComplexNum,ComplexNum);
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNum()
    {
        cout << "Your complex number is ---> " << a << " + " << b << "i" << endl;
    }
};

ComplexNum sumComplexNum(ComplexNum o1, ComplexNum o2)
{
    ComplexNum c3;
    c3.setNum((o1.a + o2.a), (o1.b + o2.b));

    return c3;
}

int main()
{
    ComplexNum c1, c2, sum;
    c1.setNum(63, 24);
    c1.printNum();

    c2.setNum(4, 89);
    c2.printNum();

    sum = sumComplexNum(c1,c2);
    sum.printNum();
    return 0;
}
