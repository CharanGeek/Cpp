#include <iostream>

using namespace std;

int main()
{
    // Using break in a for loop
    for(int i = 0; i <= 50 ; i++)
    {
        if(i == 25)
        {
            cout<<"I am executing break statement"<<endl;
            break;
        }
        cout<<i<<endl;
    }

    // Using continue in for loop
    for(int k = 50; k >= 20;k--){
        if (k == 35)
        {
            cout<<"I am skipping "<<k<<endl;
            continue;           // If continue is executed then it'll skip everything after it and go in loop
        }

        cout<<k<<endl;
    }
    return 0;
}