#include <iostream>

using namespace std;

int main(){
    int userChoice;
    cout<<"Give a number between 1 to 5 and I'll give a message for you!"<<endl;
    cin>>userChoice;
    
    switch (userChoice)
    {
    case 1:
        cout<<"Ummmmmm............ are you a war criminal?"<<endl;
        break;
    
    case 2:
        cout<<"Die you cyka bylat!!!! URAAAAAAAAAAAAAAAAAAA"<<endl;
        break;
    
    case 3:
        cout<<"I SERVE THE SOVIET UNION!"<<endl;
        break;
    
    case 4:
        cout<<"Geneva convention?? More LIKE Geneva SUGGESTIONS?"<<endl;
        break;
    
    case 5:
        cout<<"Idk why your mother doesn't leave me ;( come take her!"<<endl;
        break;
    
    default:
        cout<<"Why tf did you enter an invalid digit?"<<endl;
        break;
    }
    return 0;
}