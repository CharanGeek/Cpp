#include <iostream>

using namespace std;

int main()
{
    /* 
    Learning about Pointers!
        Q) What is a pointer?
        A) It is a DataType which holds the address of other DataTypes (or variables)  

        Q) What does pointers do?
        A) They store the address where that variable is stored in your RAM! 
    */

    // Making a pointer
    float pi = 3.14;
    float* addressPi = &pi;         // You can declare the type of pointer using '*' after its type and you have to use '&' after the assignment operator

    // & --> Address of operator
    cout<<"The address of the varaible 'pi' using &pi is ---> "<<&pi<<endl;
    cout<<"The address of the varaible 'pi' using addressPi is ---> "<<addressPi<<endl;

    // * --> Value at operator
    cout<<"The value at the address "<<addressPi<<" is ---> "<<*addressPi<<endl;


    // Pointer to Pointer
    float** c = &addressPi;
    cout<<"The address of addressPi using &addressPi is ---> "<<&addressPi<<endl;
    cout<<"The address of addressPi using c is ---> "<<c<<endl;
    cout<<"The value of c using *c is ---> "<<*c<<endl;
    cout<<"The value_of(value_of c) is ---> "<<**c<<endl;

    return 0;
}