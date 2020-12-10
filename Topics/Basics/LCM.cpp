#include <iostream>
using namespace std;
int GCD(int a, int b){    //you can use built-in function __gcd(a, b)
  if(!b)  return a;
  return GCD(b, a%b);
}
int LCM(int a, int b){
  return (a*b)/GCD(a, b);
}
int main(){

	return 0;
}

