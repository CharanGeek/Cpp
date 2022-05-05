#include <iostream>

using namespace std;

int main(){
    /*
        Types of loop in C++
            1. For-Loop
            2. While-Loop
            3. Do-While Loop
    */

    // Using For loop
    for (int i = 1 ; i <= 100 ; i++)
    {
        cout<<"For loop has executed "<<i<<" times"<<endl;
    }

    // Using While loop
    short int k = 1;
    while (k<=50)
    {
        cout<<"The while has executed "<<k<<" times"<<endl;
        k++;
    }
    
    // Using Do-While loop
    short int m =  250;
    do
    {
        cout<<"The value of 'm' in the do-while loop before updation is "<<m<<endl;
        m++;
        cout<<"The value of 'm' in the do-while loop after updation is "<<m<<endl;
    } while (m<=250);
    
    // Write the table of a certain number using for loop
    int userTableChoice, tableLimit;

    cout<<"Enter a number whose table you want to get: ";
    cin>>userTableChoice;

    cout<<"Enter the limit of your multiplication table: ";
    cin>>tableLimit;
    for (int t = 1 ; t <= tableLimit ; t++)
    {
        cout<<userTableChoice<<" x "<<t<<" = "<<userTableChoice*t<<endl;
    }

    // Making an infinite loop using while loop
    while(true)
    {
        cout<<"This is an infinite loop!"<<endl;
        // Press Ctrl + C to exit an infinite loop!
    }

    return 0;
}