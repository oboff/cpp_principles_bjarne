#include "std_lib_facilities.h"

int main() {
    int x = 25;
    int* y = &x;
    int** z = &y;
    cout << "int x = " << x << endl;
    cout << "int* y = &x;\t y = " << y << endl; 
    cout << "int** z = &y;\t z = " << z <<endl;
    cout << "*y = " << *y << endl;
    cout << "*z = " << *z << endl;
    cout << "**z = " << **z << endl;
    cout << "&x = " << &x << endl;
    cout << "&y = " << &y << endl;
    cout << "&z = " << &z << endl;
}
