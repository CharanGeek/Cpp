#include <iostream>

using namespace std;

int main()
{
    int marks[5] =  {34,52,99,94};        // Setting the length of an array inside [] is optional
    marks[4] = 45;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;

    marks[3] = 10;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    // Printing the contents of an array using for-loop
    for (int i = 0; i < 5; i++){
        cout<<"The content on marks array on index "<<i<<" using for loop is ---> "<<marks[i]<<endl;
    }
    
    cout<<endl;

    // Printing the contents of an array using while-loop
    int k = 0;
    while(k<5){
        cout<<"The content on marks array on index "<<k<<" using while-loop is ---> "<<marks[k]<<endl;
        k++;
    }

    cout<<endl;

    // Printing the contents of an array using do-while-loop
    int m = 0;
    do{
        cout<<"The content on marks array on index "<<m<<" using do-while-loop is ---> "<<marks[m]<<endl;
        m++;
    }while(m<5);

    return 0;
}