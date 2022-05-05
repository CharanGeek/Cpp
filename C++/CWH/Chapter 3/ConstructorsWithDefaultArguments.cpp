#include <iostream>

using namespace std;

class Simple
{
    int data1,data2,data3;

    public:
        Simple(int a, int b = 10, int c = 69)
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();
};

void Simple :: printData()
{
    cout<<"Your first number is: "<<data1<<" and second number is: "<<data2<<" and third number is: "<<data3<<endl;

}

int main()
{
    Simple s1(25,2,705);
    s1.printData();

    Simple s2(1993,24);
    s2.printData();

    Simple s3(24);
    s3.printData();

    return 0;
}