#include "std_lib_facilities.h"
#include <vector>

int main()
{
    vector<string> previous;
    string input;
    while(true) 
    {
        getline(cin, input);
        previous.push_back(input);
        for(int i = 0; i << previous.size()-1; i++)
        {
            cout << previous[i] << endl;
        }
        if(previous[previous.size()-1] == "exit") break;
    }
}
