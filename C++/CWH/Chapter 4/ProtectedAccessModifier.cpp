#include <iostream>

using namespace std;


class Base
{
    // Protected is like private, the difference is that it can be inherited
    protected:
        int a = 99;
    
    private:
        int b;
    
    public:
        void displayA()
        {
            cout<<a<<endl;
        }
};

/*
Helpful table:  

                            Public derivation          Private derivation         Protected derivation

    1) Private members          Not inherited           Not inherited                Not inherited
    2) Protected members        Protected               Private                      Protected
    3) Public members           Public                  Private                      Protected

*/

class Derived : protected Base
{
    
};

int main()
{
    Base b;
    Derived d;

    b.displayA();
    // d.displayA();           --> This will throw error since public method will become protected in protected derivation
    return 0;
}