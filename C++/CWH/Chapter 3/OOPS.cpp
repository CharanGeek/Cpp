#include <iostream>

using namespace std;

// Class is an extension of structures (since you couldn't put methods in structures and all of variables were public)
// Making an Employee class
class Employee
{
    // Making private variables (they can't be acessed from outside the class)
private:
    int age;
    double salary;
    string post;

    // Making public variables
public:
    string name;
    int eid;

    // Making functions inside the class

    void setData(int employeeAge, int employeeID, double employeeSalary, string employeePost, string employeeName); // Function template
    void getData()
    {
        cout << "The age of the employee is ---> " << age << endl;
        cout << "The salary of the employee is ---> " << salary << endl;
        cout << "The eid of the employee is ---> " << eid << endl;
        cout << "The post of the employee is ---> " << post << endl;
        cout << "The name of the employee is ---> " << name << endl;
        cout << "--------------------------------------------------\n";
    }
} Mohan; // You can make an object of class like this (not recommended)

// Defining the function outside the class therefore we have to use :: (scope resolution operator)
void Employee ::setData(int employeeAge, int employeeID, double employeeSalary, string employeePost, string employeeName)
{
    age = employeeAge;
    salary = employeeID;
    eid = employeeSalary;
    post = employeePost;
    name = employeeName;
}

int main()
{
    // Making object of the class Employee
    Employee Aditya;
    Aditya.setData(14, 1313, 40050.24, "CEO", "Aditya Tiwari");
    // Aditya.age = 15;                 this will throw error since variable "age" is private!
    Aditya.getData();

    Mohan.setData(45, 2814, 80000.1344, "Peon", "Mohan Dubey");
    Mohan.getData();

    return 0;
}