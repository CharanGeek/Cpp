#include <iostream>

using namespace std;

/*

Case 1:
    class B: public A
    {
        Order of execution of constructor -> A() then B()
    };

Case 2: 
    class A: public B, public C
    {
        Order of execution of constructor -> B() then C() then A()
    }

Case 3:
    class A: public B, virtual public C
    {
        Order of execution of constructor -> C() [because C is a virtual base class] then B() then A()
    }

*/

class Base1
{
    int data1;
    
    public:
        Base1(int i)
        {
            data1 = i;
            cout<<"Base1 class's constructor is called!"<<endl;
        }

        void printData()
        {
            cout<<"The value of data is: "<< data1 <<endl;
        }
};

class Base2
{
    int data2;
    
    public:
        Base2(int i)
        {
            data2 = i;
            cout<<"Base2 class's constructor is called!"<<endl;
        }

        void printData()
        {
            cout<<"The value of data is: "<< data2 <<endl;
        }
};

class Derived : public Base1, virtual public Base2          // Here, changing order will change the order of constructor execution (but since Base2 is a virtual base class then its constructor will be called before Base1)
{
    int derived1, derived2;

    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a)            // Here, changing order wont change the order of constructor execution
        {
            derived1 = c;
            derived2 = d;
            cout<<"Derived class's constructor is called!"<<endl;
        }

        void printData()
        {
            cout<<"The value of derived1 is: "<< derived1 <<endl;
            cout<<"The value of derived2 is: "<< derived2 <<endl;
        }
};

int main()
{
    Derived obj(32,53,254,52);
    obj.printData();

    return 0;
}