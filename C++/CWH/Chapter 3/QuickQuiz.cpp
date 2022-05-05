#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    int x,y;

    public:
        Point(void)
        {
            static int index = 1;

            cout<<"Enter the x co-ordinates for object no. "<<index<<" : ";
            cin>>x;

            cout<<"Enter the y co-ordinates for object no. "<<index<<" : ";
            cin>>y;

            index++;
        }

        void displayPoint()
        {
            cout<<"The co-ordinate is: (" << x <<" , "<< y <<")"<<endl;
        }

        friend void computeDistanceBetweenPoints(Point, Point);
};

// Quick Quiz --> Read co-ordinates from the user and find out the distance between two points
void computeDistanceBetweenPoints(Point ob1, Point ob2)
{
    int x1,x2,y1,y2;

    x1 = ob1.x;
    x2 = ob2.x;

    y1 = ob1.y;
    y2 = ob2.y;

    // Calculating distance using distance formula
    float distance = sqrt(pow((x2 - x1),2) + pow((y1 - y2),2));
    cout<<"The distance between the 2 points is: "<<distance<<endl;
}

int main()
{
    Point po1,po2;
    computeDistanceBetweenPoints(po1,po2);

    return 0;
}