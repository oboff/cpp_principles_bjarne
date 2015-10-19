#include "std_lib_facilities.h"

int main()
{
    vector<int> vec;
    for(int i = 0; i < 10; ++i) 
    {
        vec.push_back(i+10);
        cout << "vec[" << i << "]: " << vec[i] << endl;
    }
    vec.resize(101);
    vec[100] = 110;
    cout << "vec[99]" << vec[99] << endl;
    cout << "vec[100]" << vec[100] << endl;
    cout << vec.size() << endl;
    for(int i = 0; i < vec.size(); ++i) 
    {
        cout << "vec[" << i << "]: " << vec[i] << endl;
    }
    
    vector<int> v = {5, 3, 67, 7, 32};
    for(int x : v) 
        cout << x << endl; 
}

