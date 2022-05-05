#include <iostream>

using namespace std;

class ComplexNum
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySumOfObjects(ComplexNum obj1, ComplexNum obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }

    void printNum()
    {
        cout<<"Your complex number is ---> "<<a<<" + "<<b<<"i"<<endl;
        /* What complex number means is: there is an i at the end and the numbers will get added simply

        Example:
        52 +2i
        4 +28i
        ----------
        56 +30i
        
        */
        
    }
};

int main()
{
    ComplexNum c1,c2,c3;
    c1.setData(52,2);
    c1.printNum();

    c2.setData(4,28);
    c2.printNum();

    c3.setDataBySumOfObjects(c1,c2);
    c3.printNum();

    return 0;
}