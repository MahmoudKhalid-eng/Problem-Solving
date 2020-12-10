#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[] = "hj;pq910js4";

    cout << "The digit in the string are:" << endl;
    for (int i=0; i<strlen(str); i++)
    {
        if (isdigit(str[i]))
            cout << str[i] << " ";
    }

    return 0;
}
