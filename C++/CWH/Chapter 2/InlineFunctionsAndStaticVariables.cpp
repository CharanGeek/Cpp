#include <iostream>

using namespace std;

int inlineProduct(int,int);
int staticProduct(int,int);

int main()
{
    int n1,n2;
    cout<<"Enter first number ---> ";
    cin>>n1;

    cout<<"Enter second number ---> ";
    cin>>n2;

    cout<<"--------------------Using inline product method--------------------"<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<inlineProduct(n1,n2)<<endl;

    cout<<"--------------------Using static product method--------------------"<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;
    cout<<"The product of the two numbers are ---> "<<staticProduct(n1,n2)<<endl;


    return 0;
}

// When you use an inline function, the actual code is copied and pasted in the place where you call it therefore if your function is small and is being used many times, then you should use an inline function but if your function is anything complex (loops, recursion, etc) then inline functions aren't recommended
inline int inlineProduct(int a,int b)
{
    return a*b;
}

int staticProduct(int a,int b)
{
    // Using static keyword makes sure that whenever the function is called, variable 'c' will not be reassigned (to 0 in this case) and it'll retain its value from the last time
    static int c = 0;           // Dont use this in inline function
    c+=1;
    return a*b+c;
}