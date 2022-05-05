#include <iostream>

using namespace std;

/*

======================================= INHERITANCE ======================================
1) We can reuse the properties (variables and memeber functions) of a class by inheriting from it
2) The exsisting class is called the Base class
3) The new class which inherits the properties is called Derived class
4) There can be more than one Base and Derived classes


TYPES OF INHERITANCE

1) Single Inheritance               ---->   When only 1 Derived class is derived from only 1 Base Class                 (Ex.-> Employee is base class and Programmer is derived class)
2) Multiple Inheritance             ---->   When a Derived class is derived from more than 1 Base class                 (Ex.-> Employee and Lab assistant are base classes and Programmer is derived class)
3) Hierarchical Inheritance         ---->   When more than 1 Derived classes are derived from only 1 Base class         (Ex.-> Employee is base class and Manager and Programmer are derived classes)
4) Multilevel Inheritance           ---->   When a class is derived from another Derived class which was Derived from a base class          (Ex.-> Cow class is derived from Mammal class which was derived from Animal base class)
5) Hybrid Inheritance               ---->   When a class derived from 2 classes which were derived from a single base class. It's a combination of multiple inheritance and mulit-level inheritance         (Ex.-> Bat class is derived from Mammal and Bird classes whose Base class is Animal)


*/

// Base class
class Employee
{
    public:
        int id;
        float salary;

        Employee(int inpID)
        {
            id = inpID;
            salary = 50.0f;
        }

        // When you make an object of derived class then automatically base class's constructor is called
        Employee(){}
};

/* Derived class syntax
class {{derived-class-name}} :  {{visiblity-mod}} {{base-class-name}}
{
    class's data members

    Notes:

    1) Default visiblity mode is private
    2) Public Visiblity Mode: Public members of the base class becomes the public members of the derived class
    3) Private Visiblity Mode: Public members of the base class becomes the private members of the derived class
    4) Private members are never inherited
}
*/

// Creating a programmer derived class from Employee base class

class Programmer : public Employee
{
    public:

        Programmer(int inpID)
        {
            int languageCode = 9;
            id = inpID;
        }

        void getData()
        {
            cout<<"Employee id is: "<<id<<endl;
        }
};

int main()
{
    Employee aditya(1),baka(2);

    cout<<aditya.salary<<endl;
    cout<<baka.salary<<endl;

    Programmer skillF(3);
    cout<<skillF.languageCode<<endl;
    skillF.getData();

    return 0;
}