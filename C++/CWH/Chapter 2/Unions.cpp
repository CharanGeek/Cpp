#include <iostream>

using namespace std;

typedef union RupeeExchange
{
    // In a union, if you give a value to one variable then automatically it'll be the same of others too and it will allocate the highest memory taken by a datatype in the union
    int rice;
    float dollar;
    double atomicWeight;
} rex;


int main()
{
    union RupeeExchange e1;
    e1.dollar = 74.328f;
    cout<<e1.dollar<<endl;

    rex e2;
    e2.atomicWeight = 82948.13451535;
    cout<<e2.atomicWeight<<endl;
    
    return 0;
}