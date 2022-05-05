#include <iostream>

using namespace std;

/*
Student --> Test
Student --> Sports

Test and Sports --> Result

Here, both Test and Sports have data members of Student class
Will Result class inherit those twice?
To resolve this ambiguity, we use virtual keyword and made Student a virtual base class so that Result class recieves data members of Student only once

*/

class Student
{
    protected:
        int roll;
    
    public:
        void setRoll(int n)
        {
            roll = n;
        }

        void printRoll()
        {
            cout<<"Your roll no. is: "<< roll <<endl;
        }
};

class Test : virtual public Student
{
    protected:
        float math, physics;

    public:
        void setMarks(float m, float p)
        {
            math = m;
            physics = p;
        }

        void printMarks()
        {
            cout<<"You have obtained\nMaths: "<<math<<"\nPhysics: "<<physics<<endl;
        }
};

class Sports : virtual public Student
{
    protected:
        float score;

    public:
        void setScore(float sc)
        {
            score = sc;
        }

        void printScore()
        {
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
    private:
        float total;
    
    public:
        void display()
        {
            total = math + physics + score;
            printRoll();
            printMarks();
            printScore();

            cout<<"Your total score is: "<<total<<endl;
        }
};

int main()
{
    Result Adi;
    Adi.setRoll(6);
    Adi.setMarks(75.0f,67.5f);
    Adi.setScore(9.4f);

    Adi.display();
    return 0;
}

