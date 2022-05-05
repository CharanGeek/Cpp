#include <iostream>

using namespace std;

// This method will take address of 2 variables and store it as pointers then with the help of the pointer we'll use the value of operator and change its actual value in the RAM
// Call by reference using Pointer
void swapNumUsingPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using Reference Variable
void swapNumUsingReferenceVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int n1, n2;
    cout << "Enter a number and this program will swap it!" << endl;

    cout << "Enter 1st number ---> ";
    cin >> n1;

    cout << "Enter 2nd number ---> ";
    cin >> n2;

    cout << "The 1st number before swap is ---> " << n1 << " and the 2nd number before swap is ---> " << n2 << endl;
    swapNumUsingPointer(&n1, &n2);
    cout << "The 1st number after swap is ---> " << n1 << " and the 2nd number after swap is ---> " << n2 << endl;

    swapNumUsingReferenceVar(n1, n2);
    cout << "The 1st number after another swap is ---> " << n1 << " and the 2nd number after another swap is ---> " << n2 << endl;
    return 0;
}

/*
// This method will not swap the actual variables in main method (n1 and n2) since a and b are just copies of n1 and n2 
void swapNumUsingPointer(int a, int b)
{
    
    int temp = a;
    a = b;
    b = temp;

}
*/
