#include <iostream>

using namespace std;

int main()
{
    // Using an enum, you can store different constants (you can specify the type using : {dataType} after the enum's name, by default they are 32 bit integers) using variables and you can use those variable later in your code which will keep it more clean and readable
    enum Meal
    {
        breakfast,lunch = 64,dinner = 2         // By defalut their values will be equal to their index numbers
    };

    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    int rank = dinner;
    cout<<"Your rank is ---> "<<rank<<endl;



    enum Grade : char
    {
        Excellent = 'A', VeryGood = 'B', Good = 'C', Average = 'D', Fail = 'F'
    };

    Grade RohanGrade = VeryGood;            // If you use "Grade" DataType, you cannot have any constant which isn't in that Enum
    cout<<"Rohan's grade is ---> "<<RohanGrade<<endl;

    return 0;
}