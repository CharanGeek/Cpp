#include <iostream>
#include <string>

using namespace std;

class Binary
{
    // By default everything in class is private
    string s;
    void checkBinary(void);

public:
    void read(void);
    void onesCompliment(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number ---> ";
    cin >> s;
}

void Binary ::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "The number you entered isn't binary!" << endl;
            exit(0);
        }
    }
}

void Binary ::onesCompliment(void)
{
    // This is called Nesting of Member function i.e. using a member function inside another function
    checkBinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
     
        }

        
    }
}

void Binary ::display(void)
{
    cout << "Displaying your binary" << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary bin;
    bin.read();
    // bin.checkBinary();
    bin.display();
    bin.onesCompliment();
    bin.display();

    
    return 0;
}