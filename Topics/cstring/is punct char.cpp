#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    char ch1 = '+';
    char ch2 = 'r';

    ispunct(ch1) ? cout << ch1 << " is a punctuation character" : cout << ch1 << " is not a punctuation character";
    cout << endl;
    ispunct(ch2) ? cout << ch2 << " is a punctuation character" : cout << ch2 << " is not a punctuation character";

    return 0;
}
