#include <iostream>
// All divisors of int
// All the numbers that divide some Integer

using namespace std;
void findDivisors(int n){
    for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(n/i==i){
                cout<<i<<endl;
			}
			else{
                cout<<i<<endl;
                cout<<n/i<<endl;
			}
		}
	}

}
int main(){
	int n;
	cin>>n;
	findDivisors(n);
	return 0;
}
