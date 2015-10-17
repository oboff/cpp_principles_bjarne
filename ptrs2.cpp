#include "std_lib_facilities.h"

void AddMe(int* z, vector<int>* nums)
{
    (*nums).push_back(*z);
}

void AddMe2(string* in, vector<string>* ins)
{
    (*ins).push_back(*in);
}

void PrintMe(int* z) 
{
    cout << *z << endl;
}

int main() 
{
    int x = 25;
    int* y = &x;
    vector<int> nums;   
    PrintMe(&x);
    AddMe(&x, &nums);
    cout << nums[0] << endl;

    vector<string> strs;
    string input = "orly";
    AddMe2(&input, &strs);
    cout << strs[0] << endl;
    return 0;
}
