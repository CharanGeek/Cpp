#include <iostream>

using namespace std;

/*
    Desturctor never takes or return any value/arguement
    It is automatically called by the compiler when object is deleted
*/

int count = 0;

class Num
{

    public:
        Num()
        {
            count++;
            cout<<"Object is created and object number is "<<count<<endl;
        }

        ~Num()
        {
            cout<<"Destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object o1"<<endl;
    Num o1;

    {
        // Any objects made inside a block will be deleted when the block is closed
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects, o2 and o3"<<endl;
        Num o2,o3;
        cout<<"Exiting this block"<<endl;
    }
    
    cout<<"Back to main method!"<<endl;

    return 0;
}