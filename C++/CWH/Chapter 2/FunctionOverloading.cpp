#include <iostream>

using namespace std;

int sum(int,int);
int sum(int,int,int);
int volume(double,double);
int volume(double);
int volume(double,double,double);

int main()
{
    cout<<"The sum 4 and 28 is ---> "<<sum(4,28)<<endl;
    cout<<"The sum 543,22 and 52 is ---> "<<sum(543,22,52)<<endl;
    cout<<"The volume of cylinder with radius 4cm and height 2cm is ---> "<<volume(4,2)<<" cm"<<endl;
    cout<<"The volume of cube with side 7cm is ---> "<<volume(7.0)<<" cm"<<endl;
    cout<<"The volume of cubiod with length 2cm and breadth 5cm is ---> "<<volume(2,5)<<" cm"<<endl;

    return 0;
}

int sum(int a, int b){
    cout<<endl<<"Function with 2 arguements is getting executed"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<endl<<"Function with 3 arguements is getting executed"<<endl;
    return a+b+c;
}

// volume for:
// Cylinder
int volume(double r, double h){
    return(3.14*r*h);
}

// Cube
int volume(double s){
    return s*s*s;
}

// Cuboid
int volume(double l, double b, double h){
    return (l*b*h);
}