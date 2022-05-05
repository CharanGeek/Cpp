#include <iostream>

using namespace std;

float percent = 94.24f;

int main(){
    // Getting value of Global variable when it is already declared locally
    float percent = 74.934343f;
    cout<<percent<<endl;            // Here, you'll get the local value of percent
    cout<<::percent<<endl;          // To get the global directly use the scope resolution operator i.e. "::"

    // Using Prefix in long double
    long double pi = 3.14159265359L;            // Using things like "L" or "f" help when doing function overloading ("l" or "L" represents long double here)

    // Using sizeof keyword to find sizes of doubles, floats and long double literals (this depends on machine to machine)
    cout<<"The size of 42.2 is --> "<<sizeof(42.2)<<endl;
    cout<<"The size of 42.2f is --> "<<sizeof(42.2f)<<endl;
    cout<<"The size of 42.2F is --> "<<sizeof(42.2F)<<endl;
    cout<<"The size of 42.2l is --> "<<sizeof(42.2l)<<endl;
    cout<<"The size of 42.2L is --> "<<sizeof(42.2L)<<endl;

    // Reference Variables  ---> When a variable is pointing to another variable it is called a Reference Variable. You can also understand it as a nickname for variable.
    cout<<"Using Reference Variables: "<<endl;
    int egoSize = 2;                // If you change the value of egoSize then ppSize will change automatically
    int & ppSize = egoSize;

    cout<<egoSize<<endl;
    cout<<ppSize<<endl;

    // Typecasting
    cout<<"Using Typecasting: "<<endl;
    cout<<"The approx. value of PI is ---> "<<(float)pi<<endl;
    cout<<"The integer value of PI is ---> "<<int(pi)<<endl;

    float approxPI = float(pi);       // Just to show that you can also store value using Typecasting

    cout<<"The value of expression is ---> "<<approxPI + ppSize<<endl;          // Here Impict Typecasting takes place and int (ppSize) is converted to float
    return 0;
}