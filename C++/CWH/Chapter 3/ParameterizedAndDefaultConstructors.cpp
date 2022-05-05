#include <iostream>

using namespace std;

class Point
{
    int x,y;

    public:
        Point(int, int);

        void displayPoint()
        {
            cout<<"The co-ordinate is: (" << x <<" , "<< y <<")"<<endl;
        }

};

// This is parameterized constructor as it takes parameters (default constructor are discussed in "Constructors.cpp")
Point :: Point(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    // Implicit call
    Point p1(63,-2);
    p1.displayPoint();

    // Explicit call
    Point p2 = Point(-14,32);
    p2.displayPoint();

    return 0;
}