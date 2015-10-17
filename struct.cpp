#include "std_lib_facilities.h"

struct Repeated {
    string word;
    int count;
};

int main() 
{
    Repeated word = {"hello", 2};
    Repeated word2 = {"dwhello", 42};

    cout << word.word << endl;
    cout << word.count << endl;

    vector<Repeated> words;
    words.push_back(word);
    words.push_back(word2);

    for(auto it=words.begin(); it != words.end(); it++)
    {
        cout << *it.word << endl;
    }
    return 0;
}
