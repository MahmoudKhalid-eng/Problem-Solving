#include <iostream>
using namespace std;
long long factorial(int num){
    long long fact =1;
	for(int i=1;i<=num;i++){
		fact *= i;
	}
    return fact;
}
int main(){
	int num;
	cin>>num;

	cout<<factorial(num);
	return 0;
}
