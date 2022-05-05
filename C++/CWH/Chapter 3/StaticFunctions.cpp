#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the employee id ---> ";
        cin >> id;

        count++;
    }

    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    // A static funtion can only access static variables or static methods and it can run without an object
    static void getCount(void)
    {
        cout<<"The value of count is "<<count<<endl;
        // cout<<id;            ---> This will throw error
    }
};

int Employee::count;

int main()
{
    Employee Eren, Levi, Armin;

    Eren.setData();
    Eren.getData();

    Employee::getCount();

    Levi.setData();
    Levi.getData();

    Employee::getCount();

    Armin.setData();
    Armin.getData();

    Employee::getCount();

    return 0;
}