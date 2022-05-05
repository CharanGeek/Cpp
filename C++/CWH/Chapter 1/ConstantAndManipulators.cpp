#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int age = 32;
    age = 0;                // Here, you could re-declare the variable but sometimes you want it to remain constant (or unchangable)

    // Using 'const' keyword to make the variable constant
    const float pi = 3.14;
    cout<<"Your percentage is ---> "<<pi<<endl;

    /* 
    Manipulators in C++
    
    There are 2 Manupulators

    1) endl
    2) setw (set width)   (To use this you'll have to import iomanip)
    */

    //Using endl
    cout<<"I'm using endl"<<endl<<"to go into new line"<<endl;

    //Using setw (it sets width for whatever comes after it)
    cout<<"hello setw"<<setw(30)<<38444499<<endl;

    return 0;
}