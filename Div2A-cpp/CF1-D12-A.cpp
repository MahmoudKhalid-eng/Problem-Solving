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
	long long n,m,a;
	cin>>n>>m>>a;
	// ceil(m/a) * ceil(n/a) =((m+a-1)/a)*((n+a-1)/a)
	cout<<((m+a-1)/a)*((n+a-1)/a);
    /*
    long long n,m,a,x,y;
    cin>>n>>m>>a;
    x=n/a;
    y=m/a;
    if(n % a != 0) ++x;
    if(m % a != 0) ++y;
    cout<< x*y<<endl;
    */
	return 0;
}
