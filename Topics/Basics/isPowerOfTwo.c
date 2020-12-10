#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
bool isPowerOfTwo(unsigned long long n){
    if(n==0) return false;

    return ceil(log2(n))==floor(log2(n));
}

int main(){
	fast();
	unsigned long long n;
	cin>>n;
	if(isPowerOfTwo(n)){
        cout<<"YES";
        return 0;
	}
	cout<<"NO";
}
