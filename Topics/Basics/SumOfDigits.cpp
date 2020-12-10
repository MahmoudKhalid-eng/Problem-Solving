#include <iostream>
using namespace std;
int sumOfDigits(int num){
    int rem =0,sum=0;
    while(num>0){
		rem=num%10;
		sum += rem; //3+
		num = num/10;
	}
	return sum;
}
int main(){
	int num;
	cin>>num; // 123
    cout<<sumOfDigits(num); // 6
	return 0;
}
