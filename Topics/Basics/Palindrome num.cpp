#include <iostream>
using namespace std;
bool isPalind(int num){
    int n =num,rev=0,digit;
    do{
		digit=num % 10;
		rev = (rev*10)+digit;
		num /=10;
	}
	while(num != 0);
	if(n==rev) return true;

	return false;
}
int main(){
	int n;
	cin>>n;
	if(isPalind(n)) cout<<"YES";
	else cout<<"NO";
}
