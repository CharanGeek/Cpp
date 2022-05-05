#include <iostream>

using namespace std;

// Making Student class
class Student
{
    protected:
        int roll_no;

    public:
        void setRoll(int);
        void getRoll(void);
};

void Student :: setRoll(int r)
{
    roll_no = r;
}

void Student :: getRoll()
{
    cout<<"The roll number is: "<<roll_no<<endl;
}

// Making Exam class
class Exam : public Student
{
    protected:
        float maths;
        float science;
    
    public:
        void setMarks(float,float);
        void getMarks();
};

void Exam :: setMarks(float m1, float m2)
{
    maths = m1;
    science = m2;
}

void Exam :: getMarks()
{
    cout<<"The marks obtained\nMaths: "<<maths<<"\nScience: "<<science<<endl;
}

// Making Result class
class Result : public Exam
{
    private:
        float percent;
    
    public:
        void displayResult();
};

void Result :: displayResult()
{
    getRoll();
    getMarks();

    percent = (maths + science) / 2;
    cout<<"Your percentage is: "<<percent<<" %"<<endl;
}

// Driver function
int main()
{
    Result adi;

    adi.setRoll(6);                         // Student class's function is used
    adi.setMarks(60.5F,86.5F);              // Exam class's function is used
    adi.displayResult();                    // Result class's function is used

    /*
        Notes:
            If we are inheriting B from A and C from B     [A --> B --> C]

            1. A is the base class is for B and B is the base class for C
            2. A-->B-->C is called the inheritance path
    */

    return 0; 
}