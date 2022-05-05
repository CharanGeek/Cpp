#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"We will tell you weather you can drive or not"<<endl<<"Please enter your age --> ";
    cin>>age;

    if (age<=10)
    {
        cout<<"Kiddo go play Fortnight or something!"<<endl;
    }

    else if (age<=15)
    {
        cout<<"Go fuck some bitches nigga dayum!"<<endl;
    }

    else if (age>=130)
    {
        cout<<"Why doth a unholy spirit like thyself enter my chamber"<<endl;
    }

    else if (age>=18)
    {
        cout<<"Vroom vromm! I can already hear the loud voice of your Nano :p"<<endl;
    }

    else
    {
        cout<<"fug wtf why does else gets executed?"<<endl;
    }
    
    return 0;
}