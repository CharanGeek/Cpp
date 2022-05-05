#include <iostream>

using namespace std;

class Number
{
    // Copy constructor is used when you want to replicate an object
    // A class has a copy constructor, if you use it but you dont have written one, then a class will use its own copy constructor which is supplied by compiler
    int a;

    public: 

        Number()
        {
            a = -1;
        }

        Number(int num)
        {
            a = num;
        }
        
        Number(Number &obj)
        {
            cout<<"\n-----------Copy constructor is working!-----------"<<endl;
            a = obj.a;
        }

        void display()
        {
            cout<<"The number for this object is "<< a <<endl;
        }

};

int main()
{
    Number x,y(69),z(30);

    x.display();
    y.display();
    z.display();

    Number y1(y);   // Copy constructor will be invoked
    y1.display();

    x = y1;         // Copy constructor will NOT be invoked (but it will be copied)
    x.display();

    Number x1 = z;  // Copy constructor will be invoked
    x1.display();
    return 0;
}