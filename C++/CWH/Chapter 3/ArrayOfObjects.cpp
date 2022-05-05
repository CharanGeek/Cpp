#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        salary = 69;
        cout << "Enter the ID of Employee ---> ";
        cin >> id;
    }

    void getID(void)
    {
        cout << "The ID of this employee is ---> " << id << endl;
        cout << "-----------------------------------\n";
    }
};

int main()
{
    // If its a big company then there will be way too many objects therefore best would be store all the objects inside an array
    // Employee Armin,Zeke,Eren,Mikasa,Levi;

    // Zeke.setID();
    // Zeke.getID();

    Employee Zenka[4];
    for (int i = 0; i < 4; i++)
    {
        Zenka[i].setID();
        Zenka[i].getID();
    }

    return 0;
}