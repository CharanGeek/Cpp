#include <iostream>

using namespace std;

/*
Syntax for Multiple Inhertance:

class DerivedC : visiblity-mode base1, visiblity-mode base2
{
    Class body for class "DerivedC"
};

*/

class Base1
{
    protected:
        int base1Int;
    
    public:
        void set_base1Int(int a)
        {
            base1Int = a;
        }
};

class Base2
{
    protected:
        int base2Int;
    
    public:
        void set_base2Int(int a)
        {
            base2Int = a;
        }
};

class Base3
{
    protected:
        int base3Int;
    
    public:
        void set_base3Int(int a)
        {
            base3Int = a;
        }
};

class Derived : public Base1, public Base2, public Base3
{
    public:
        void show()
        {
            cout<<"The value of base1Int is: "<<base1Int<<endl;
            cout<<"The value of base2Int is: "<<base2Int<<endl;
            cout<<"The value of base3Int is: "<<base3Int<<endl;
            cout<<"The sun of both variable is: "<<(base1Int + base2Int + base3Int)<<endl;
        }
};

/*
In the Derived class, the base1Int and base2Int will be protected
and set_base1Int(), set_base2Int() and show() will be public
*/

int main()
{
    Derived har1;
    har1.set_base1Int(4);
    har1.set_base2Int(35);
    har1.set_base3Int(47);
    har1.show();

    return 0;
}