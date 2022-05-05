#include <iostream>

using namespace std;

class BankDeposit
{
    private:
        int principal, yrs;
        float rate, returnValue;
    
    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r);           // Value of 'r' can be 0.05
        BankDeposit(int p, int y, int r);             // Value of 'r' can be 5

        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    yrs = y;
    rate = r;
    returnValue = principal;

    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+rate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    cout<<"using int 'r'"<<endl;

    principal = p;
    yrs = y;
    rate = float(r)/100;
    returnValue = principal;

    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+rate);
    }
}

void BankDeposit :: show()
{
    cout<<"Your details:\n"<<"Principal: "<<principal<<"\nTime (in yrs): "<<yrs<<"\nRate: "<<rate<<"\nReturn Value: "<<returnValue<<endl;
    cout<<"------------------------------------------------------------\n";
}

int main()
{
    /*
        When you provide the value of data members of an object during the run time, it is known as Dynamic Initialization
    */
    int p,y,r;
    float R;

    cout<<"Enter the principal amount: ";
    cin>>p;

    cout<<"Enter the time period (in yrs): ";
    cin>>y;

    cout<<"Enter the rate (use decimal, 4% = 0.04): ";
    cin>>R;

    BankDeposit bd1 = BankDeposit(p,y,R);
    bd1.show();

    cout<<"Enter the principal amount: ";
    cin>>p;

    cout<<"Enter the time period (in yrs): ";
    cin>>y;

    cout<<"Enter the rate (use integer): ";
    cin>>r;

    BankDeposit bd2 = BankDeposit(p,y,r);
    bd2.show();

    cout<<"Enter the principal amount: ";
    cin>>p;

    cout<<"Enter the time period (in yrs): ";
    cin>>y;

    cout<<"Enter the rate: ";
    cin>>r;

    return 0;
}