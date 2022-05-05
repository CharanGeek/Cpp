#include <iostream>

using namespace std;

int main()
{
    // Using Pointer Arithemetic
    int marks[] = {64,24,38,59,29};

    int* p = marks;
    cout<<"Address of 'p' before increment ---> "<<p<<endl;
    cout<<"Value of 'p' before increment ---> "<<*p<<endl;
    cout<<"Address of 'p' after increment ---> "<<(p+1)<<endl;
    cout<<"Value of 'p' after increment ---> "<<*(p+1)<<endl;
    cout<<"The value at marks[1] is ---> "<<*(p+1)<<endl;
    cout<<"The value at marks[2] is ---> "<<*(p+2)<<endl;
    cout<<"The value at marks[3] is ---> "<<*(p+3)<<endl;
    cout<<"The value at marks[4] is ---> "<<*(p+4)<<endl;
    return 0;
}