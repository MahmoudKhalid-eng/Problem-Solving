#include <iostream>
using namespace std;
int GCD(int a, int b){    //you can use built-in function __gcd(a, b)
  if(!b)  return a;
  return GCD(b, a%b);
}
int main(){

	return 0;
}
