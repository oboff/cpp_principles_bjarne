#include "std_lib_facilities.h"

void PrintBar(int x) 
{
    while(x>0)
    {
        cout << "#";
        --x;
    }
}

int main()
{
    vector<int> vec;// = {4,5,6};
    for(int i; cin >> i;)
    {
    /*    string input;
        getline(cin, input);
        stringstream result;
        int integer;
        result << input;
        if(result >> integer) 
        {
            vec.push_back(integer);
        }
    */
        vec.push_back(i);
    }
    for(int x: vec)
    {
        cout << x << ":\t";
        PrintBar(x);
        cout << endl;
    }
}
