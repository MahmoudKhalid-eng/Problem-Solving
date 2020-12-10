#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int main(){
	fast();
	long long n;
	cin>>n;

    if(n%2!=0){
    cout<<(-1*(n/2))-1;
    }
    else{
        cout<<n/2;
    }


	return 0;
}
