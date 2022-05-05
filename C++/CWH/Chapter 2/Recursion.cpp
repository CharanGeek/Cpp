#include <iostream>

using namespace std;

int facto(int);
int fib(int);

int main()
{
    cout << "This program calculates factorial of a given number as well as the fibonacci number at that term!" << endl;

    int userChoice;
    cout << "Enter the number whose factorial you want to calculate ---> ";
    cin >> userChoice;

    cout<<"The factorial of "<<userChoice<<" is "<<facto(userChoice)<<endl;
    cout<<"The number in fibonacci series at "<<userChoice<<" is "<<fib(userChoice)<<endl;
    return 0;
}

int facto(int a)
{
    if (a <= 1)
    {
        return 1;
    }

    return a * facto(a - 1);
}

int fib(int n)
{
    // Recursion wont be too good in this situation, iterative approach will be better to calculate Fibonacci series
    if(n<2)
    {
        return 1;
    }

    return fib(n-2)+fib(n-1);
}