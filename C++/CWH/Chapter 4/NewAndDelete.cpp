#include <iostream>

using namespace std;

int main()
{
    // Basic Example of pointer
    int a = 5;
    int* ptr = &a;

    cout<<"The value of a is: "<< *ptr <<endl << "The address of a is: "<< ptr <<endl;

    // Using 'new' keyword

    // In float
    float *p = new float(69.420);
    cout<<"The value at address p is: "<< *p << endl;

    // In Array
    int *arr = new int[3];
    arr[0] = 532;
    arr[1] = 336;
    *(arr+2) = 867;
    arr[3] = 985;

    // Using 'delete' operator
    delete[] arr;           // This will delete the array and free the memory

    cout<<"The value at arr[0] is: "<< arr[0] <<endl;
    cout<<"The value at arr[1] is: "<< arr[1] <<endl;
    cout<<"The value at arr[2] is: "<< arr[2] <<endl;
    cout<<"The value at arr[3] is: "<< arr[3] <<endl;


    return 0;
}