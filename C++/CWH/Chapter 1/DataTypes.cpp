#include <iostream>

using namespace std;

int global_var = 99;


void sum(){
    // A global variable can be redeclared inside a function and locally declared variables get more precedence
    int global_var = 44,b = 2222;
    int sum = global_var + b;
    cout<<"\nThe sum of 44 and 2222 is --> "<<sum;
}

int main(){
    // Making variables
    int a = 323;
    double b = 52.632;
    float pi = 3.14;
    char sec = 'E';
    bool isGay = true;

    // Printing variables
    cout<<"the value of a is --> "<<a<<" \nand the value of b is --> "<<b;
    cout<<"\nThe value of pi is --> "<<pi;
    cout<<"\nMy section is --> "<<sec;
    cout<<"\nAre you gay? "<<isGay;
    sum();
    cout<<"\nThe global variable is --> "<<global_var<<"\n";
    

    // Other variables    (They have a certain limit, google it to see those)
    short int smolInt = 24143;
    long int bigInt = 1147483888;
    long long int reallyBigInt = 2938749829875929875;

    // Printing other variables
    cout<<"The short int is --> "<<smolInt;
    cout<<"\nThe long int is --> "<<bigInt;
    cout<<"\nThe long long int is --> "<<reallyBigInt;

    return 0;
}