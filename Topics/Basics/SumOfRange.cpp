#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}

unsigned long long sum(unsigned long long l,unsigned long long r){
    unsigned long long mx = max(l,r);
    unsigned long long mn = min(l,r);
    mn--;
    return ((mx*(mx+1))/2) - ((mn*(mn+1))/2);
}
int main(){
	fast();
    unsigned long long l,r;
	cin>>l>>r;
	cout<< sum(l,r)<<"\n";
}
