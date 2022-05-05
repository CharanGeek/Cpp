#include <iostream>

using namespace std;

class Employee
{
    int id;
    // If you make a static variable then all objects will share the same variable and a static variable is property of the class
    static int count; // Static variable is 0 by default

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
};

int Employee::count;        // If you want to set a custom value of static variable, you can do it here!

int main()
{
    Employee Eren, Levi, Armin;

    Eren.setData();
    Eren.getData();

    Levi.setData();
    Levi.getData();

    Armin.setData();
    Armin.getData();
    return 0;
}