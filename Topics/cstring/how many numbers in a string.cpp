#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char digits[] = "0123456789";
    char code[] = "ceQasieoLPqa4xz10Iyq";
    char *pos;
    int count = 0;

    pos = strpbrk (code, digits);
    while (pos != NULL)
    {
        pos = strpbrk (pos+1,digits);
        count ++;
    }

    cout << "There are " << count << " numbers in " << code;

    return 0;
}
