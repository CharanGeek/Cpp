#include <iostream>

using namespace std;

class Base1
{
    public: 
        void greet()
        {
            cout<<"How are you?"<<endl;
        }
};

class Base2
{
    public:
        void greet()
        {
            cout<<"Kaise ho?"<<endl;
        }
};

// In this class, there is an ambiguity that should Base3 use the greet funtion of Base1 or Base2?
class Base3 : public Base1, public Base2
{
    int a;

    public:
        void greet()
        {
            Base1 :: greet();             // Ambiguity resolved
        }
};

class B
{
    public:
        void say()
        {
            cout<<"Hello world"<<endl;
        }
};

class D : public B
{   
    int a;
    
    public:
        void say()
        {
            cout<<"Hello people!"<<endl;
        }
};

int main()
{
    // Ambiguity 1

    Base1 base1Obj;
    Base2 base2Obj;
    Base3 base3Obj;

    base1Obj.greet();
    base2Obj.greet();
    base3Obj.greet();


    // Ambiguity 2
    D dObj;
    dObj.say();

    return 0;
}