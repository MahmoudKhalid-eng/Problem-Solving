#include <iostream>
using namespace std;

bool isPrime(long long x){
    if(x==2) return true;
    else if(x==1) return false;
    if(x%2==0) return false;
    else{
        for(long long i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
    }
    return true;
}
int main(){

	return 0;
}
