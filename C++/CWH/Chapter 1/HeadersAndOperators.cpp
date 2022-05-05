/*
There are 2 types of header files

1) System Header Files --> It comes with the compiler
2) User Defined Header Files --> It is written by another programmer
*/

#include <iostream>
// #include "this.h"            --> This will throw error if the file "this.h" isn't present in the current directory

using namespace std;

int main(){
    // Operators in C++
    cout<<"We will we be learning about Operators in C++"<<endl;

    int a,b;
    string line = "---------------------------------------------\n";

    // Taking the value of a and b from user
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    /* 
    Types of Operators

    1) Arithmetic Operators
    2) Assignment Operators
    3) Comparison Operators
    4) Logical Operatos

    */


    //Arithemetic Operators
    cout<<line<<"Using Arithemetic Operators"<<endl;
    cout<<"The value of "<<a<<" + "<<b<<" is ---> "<<a+b<<endl;
    cout<<"The value of "<<a<<" - "<<b<<" is ---> "<<a-b<<endl;
    cout<<"The value of "<<a<<" * "<<b<<" is ---> "<<a*b<<endl;
    cout<<"The value of "<<a<<" / "<<b<<" is ---> "<<a/b<<endl;
    cout<<"The value of "<<a<<" % "<<b<<" is ---> "<<a%b<<endl;
    cout<<"The value of a++ is ---> "<<a++<<endl;
    cout<<"The value of a-- is ---> "<<a--<<endl;
    cout<<"The value of ++b is ---> "<<++b<<endl;
    cout<<"The value of --b is ---> "<<--b<<endl;


    // Assignment Operators (Used to assign value to variables)
    cout<<line<<"Using Assignment Operators"<<endl;
    char sec = 'E';
    float percent = 74.93;

    cout<<"Section is --> "<<sec<<endl;
    cout<<"Percentage is --> "<<percent<<endl;

    // Comparison Operators
    cout<<line<<"Using Comparison Operators: "<<endl;
    cout<<"The value of a == b is ---> "<<(a==b)<<endl;
    cout<<"The value of a != b is ---> "<<(a!=b)<<endl;
    cout<<"The value of a >= b is ---> "<<(a>=b)<<endl;
    cout<<"The value of a <= b is ---> "<<(a<=b)<<endl;
    cout<<"The value of a > b is ---> "<<(a>b)<<endl;
    cout<<"The value of a < b is ---> "<<(a<b)<<endl;

    // Logical Operators
    cout<<line<<"Using Logical Operators: "<<endl;
    cout<<"The value of logical 'and' operator ((a==b) && (a<b)) is ---> "<<(a==b) && (a<b)<<endl;
    cout<<"The value of logical 'or' operator ((a==b) || (a>b)) is ---> "<<(a==b) || (a>b)<<endl;
    cout<<"The value of logical 'not' operator (a==b) is ---> "<<(!a==b)<<endl;

    return 0;
}