#include <cstring>
#include <iostream>


using namespace std;

int main()
{
    char src[] = "0123456789";
    char dest[] = "190126abqs121kfew";
    
    size_t length = strspn(dest, src);

    cout << dest << " contains " << length << " initial numbers";
    return 0;
}
