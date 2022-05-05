#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    // Taking the value of num1
    cout<<"Enter the value of 1st number: ";             // "<<" this is called Insertion operator
    cin>>num1;                                          // ">>" this is called Extraction operator

    // Taking the value of num2
    cout<<"Enter the value of 2nd number: ";
    cin>>num2;

    int sum = num1 + num2;
    cout<<"The sum of "<<num1<<" and "<<num2<<" is --> "<<sum<<"\n";
    return 0;
}
