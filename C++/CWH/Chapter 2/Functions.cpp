#include <iostream>

using namespace std;


// The variables 'a' and 'b' are formal parameters and declaring the return type of a function is must!
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

void greet(string name = "hooman")
{
    // In this function, I have given a default value!
    cout<<"Hello, "<<name<<endl;
}

// Function templates are used when the function is declared later but used earlier, using function templates will ensure that the compiler will check for those functions
// Function templates for subtract() and multiply() functions
void subtract(int a,int b);
int multiply(int,int);                  // Another way to write function templates

int main()
{
    greet();
    int num1,num2;
    cout<<"I'll take two numbers and add, subtract and multiply them!"<<endl<<"Enter First number ---> ";
    cin>>num1;

    cout<<"Enter second number ---> ";
    cin>>num2;

    // Here, num1 and num2 are actual parameters
    cout<<"The sum of "<<num1<<" and "<<num2<<" is ---> "<<sum(num1,num2)<<endl;

    // The lines below will throw error since the function isn't declared before this and to avoid this error we use function templates
    subtract(num1,num2);
    cout<<"The product of "<<num1<<" and "<<num2<<" is ---> "<<multiply(num1,num2)<<endl;
    return 0;
}


void subtract(int a, int b)
{
    int difference = a - b;
    cout<<"The difference between "<<a<<" and "<<b<<" is --->"<<difference<<endl;
}

int multiply(int a, int b)
{
    return a*b;
}
