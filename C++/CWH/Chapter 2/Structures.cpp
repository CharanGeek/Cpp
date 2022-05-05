#include <iostream>

using namespace std;

// Structure is a user-defined datatype which can hold different datatypes ---> Using typedef keyword you can give it a shorter name (or nickname) at last (in this case, it's stu)
typedef struct students
{
    int admissionNum;
    float pocketMoney = 0.00f;              // Giving it a default value
    bool isMale;
} stu;

int main()
{
    const string line = "---------------------------------------------";

    stu aditya;         // Actual syntax ---> struct students aditya (typedef is used therefore the syntax is different)
    aditya.admissionNum = 23413;
    aditya.isMale = true;

    cout<<"Aditya's admission number is ---> "<<aditya.admissionNum<<endl;
    cout<<"Aditya's pocket money is ---> "<<aditya.pocketMoney<<endl;
    cout<<"Is Aditya's gender male? ---> "<<aditya.isMale<<endl;

    cout<<line<<endl;    

    struct students rishu;
    rishu.admissionNum = 991349;
    rishu.pocketMoney = 69.420f;
    rishu.isMale = true;

    cout<<"rishu's admission number is ---> "<<rishu.admissionNum<<endl;
    cout<<"rishu's pocket money is ---> "<<rishu.pocketMoney<<endl;
    cout<<"Is rishu's gender male? ---> "<<rishu.isMale<<endl;
    
    cout<<line<<endl;

    stu souf;
    souf.admissionNum = 3311;
    souf.pocketMoney = 23435.3f;
    souf.isMale = false;

    cout<<"souf's admission number is ---> "<<souf.admissionNum<<endl;
    cout<<"souf's pocket money is ---> "<<souf.pocketMoney<<endl;
    cout<<"Is souf's gender male? ---> "<<souf.isMale<<endl;
    return 0;
}