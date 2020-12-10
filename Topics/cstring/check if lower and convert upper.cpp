#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "This Program Converts ALL LowerCase Characters to UpperCase";

    for (int i=0; i < strlen(str); i++)
    {
        if (islower(str[i]))
            /*  Converting lowercase characters to uppercase  */
            str[i] = str[i] - 32;
    }

    cout << str;
    return 0;
}
