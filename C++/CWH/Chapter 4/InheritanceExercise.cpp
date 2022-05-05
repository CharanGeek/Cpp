#include <iostream>
#include <math.h>

using namespace std;
/*

Problem --->  Create 2 classes:
                1. Simple Calculator                ---> Takes input of 2 numbers using a util function and performs +,-,*,/ and display the result using another util method
                2. Scientific Calculator            ---> Takes input of 2 numbers using a util function and performs any 4 scientific operation of your choice and display the result using another util method

                Create another class "Hybrid Calculator" and inherit it using these 2 classes:

                Q1: What type of inheritance are you using?
                Ans: Multiple Inheritence

                Q2: Which mode of inheritance are you using?
                Ans: Public

                Q3: Create an object of Hybrid calculator and display results of simple and scientific calculator
                Ans: Done

                Q4: How is code re-usablity implemented?
                Ans: It is implemented by using the data members of both the base classes into Hybrid Calculator class
*/


class SimpleCalculator
{
    private:
        double n1,n2;

    protected:
        double sum,diff,prod,quo;

    public:
        void inputSimple()
        {
            cout<<"------------- This is a Simple Calculator! -------------"<<endl;

            cout<<"Enter 1st number: ";
            cin>>n1;

            cout<<"Enter 2nd number: ";
            cin>>n2;
        }

        double add()
        {
            sum = n1 + n2;
            return sum;
        }

        double subtract()
        {
            diff = n1 - n2;
            return diff;
        }

        double multiply()
        {
            prod = n1 * n2;
            return prod;
        }

        int divide()
        {
            quo = n1 / n2;
            return (int) quo;
        }

        void performSimpleCalculation()
        {
            cout<<"The sum of "<< n1 << " and "<< n2 << " is: "<< add() <<endl;
            cout<<"The difference between "<< n1 << " and "<< n2 << " is: "<< subtract() <<endl;
            cout<<"The product of "<< n1 << " and "<< n2 << " is: "<< multiply() <<endl;
            cout<<"The quotient of "<< n1 << " divided by "<< n2 << " is: "<< divide() <<endl;
        }
};

class ScientificCalculator
{
    private:
        double n1;

    protected:
        double sinVal,cosVal,tanVal,logVal;

    public:
        void inputScientific()
        {
            cout<<"------------- This is a Scientific Calculator! -------------"<<endl;
            cout<<"Enter a number: ";
            cin>>n1;
        }

        double sinCompute()
        {
            sinVal = sin(n1);
            return sinVal;
        }

        double cosCompute()
        {
            cosVal = cos(n1);
            return cosVal;
        }

        double tanCompute()
        {
            tanVal = tan(n1);
            return tanVal;
        }

        double logCompute()
        {
            logVal = log(n1);
            return logVal;
        }

        void performScientificCalculation()
        {
            cout<<"The sin of "<< n1 <<" is: "<< sinCompute() <<endl;
            cout<<"The cos of "<< n1 <<" is: "<< cosCompute() <<endl;
            cout<<"The tan of "<< n1 <<" is: "<< tanCompute() <<endl;
            cout<<"The log of "<< n1 <<" is: "<< logCompute() <<endl;
        }

};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator calc;

    calc.inputSimple();
    calc.performSimpleCalculation();

    calc.inputScientific();
    calc.performScientificCalculation();

    return 0;
}