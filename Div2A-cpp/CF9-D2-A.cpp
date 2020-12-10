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
	int i,j,n,a,b,m=0;
    cin>>a>>b;
    n=6-max(a,b)+1;

    if(n==1)
        cout<<"1/6";

    if(n==0)
        cout<<"0/1";
    if(n==2)
        cout<<"1/3";
    if(n==3)
        cout<<"1/2";
    if(n==4)
        cout<<"2/3";
    if(n==6)
        cout<<"1/1";
    if(n==5)
        cout<<"5/6";


	return 0;
}
