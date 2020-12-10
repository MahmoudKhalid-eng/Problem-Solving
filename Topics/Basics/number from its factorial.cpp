#include <iostream>
using namespace std;
long long numFrom_Factorial(int fact){
    long long i;
    for( i=1;i<=fact;i++){
		fact=fact/i;//1
		if(fact==1){
			break;
		}
    }
    return i;
}
int main(){
	long long fact;
	cin>>fact;
	cout<<numFrom_Factorial(fact);
	return 0;
}
