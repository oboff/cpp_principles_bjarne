#include "std_lib_facilities.h"

int main()
{
    cout << "i" << " " << "j" << endl;
    cout << "-" << " " << "-" << endl;
    for(int i, j = 0; i < 10; i=++j) 
    {
        cout << i << " " << j << endl;
    }
}
