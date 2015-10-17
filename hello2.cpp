#include "std_lib_facilities.h"

int main() 
{
    double age = -1;
    string name = "???";

    cout<< "Enter name and age: ";
    cin >> name >> age ;
    cout << "Hello, " << name << "(" << age*12 << ")" << endl;
    
    string name2;
    cout << "Enter name2: ";
    cin >> name2;
    if(name == name2) cout << "same name" << endl;
    if(name < name2) cout << name << " < " << name2 << endl;
    if(name > name2) cout << name << " > " << name2 << endl;
    cout << name+name2 << endl;
    return 0;
}

