#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "Hello\tall\nhow are you";

    for (int i=0; i<strlen(str); i++)
    {
        /* replace all non printable character by space */
        if (!isprint(str[i]))
            str[i] = ' ';
    }

    cout << str;
    return 0;
}
