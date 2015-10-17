#include "std_lib_facilities.h"

struct Word 
{
    string word;
    int count;
};

void AddWord(string* input, vector<Word>* words) 
{
    Word word = {*input, 1};
    (*words).push_back(word);
}

void CheckWord(string* input, vector<Word>* words)
{
    bool repeat = false;
    /*iterate through words and test word match*/
    for(auto it=(*words).begin(); it != (*words).end(); it++)
    {
    /*if match, increase word count in vector*/
        if(*input == (*it).word) 
        {
            repeat = true;
            (*it).count++;
            break;
        }
    }
    if(repeat == false)
        /*else, pass to AddWord*/
        AddWord(input, words);
}

int main() 
{
    vector<Word> words;
    string input;
    
    while(true) 
    {
        getline(cin, input);
        CheckWord(&input, &words);
        for(auto it = words.begin(); it != words.end(); it++)
        {
            cout << (*it).word << "\t" << (*it).count << endl;
        }       
    }
    return 0;
}
