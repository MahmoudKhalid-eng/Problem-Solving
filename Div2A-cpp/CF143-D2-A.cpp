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
	int r1,r2,c1,c2,d1,d2,a,b,c;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	for(int i=1;i<=9;i++){
        a = r1-i;
        b = c1-i;
        c = r2-c1+i;
        if(i+b==c1&&a+c==c2&&i+a==r1&&
           b+c==r2&&i+c==d1&&a+b==d2&&
           i!=a&&i!=b&&i!=c&&a!=b&&a!=c&&
           b!=c&&i<=9&&a<=9&&b<=9&&c<=9&&
           a>0&&b>0&&c>0){
                cout<<i<<" "<<a<<"\n"<<b<<" "<<c<<endl;
                return 0;
           }
	}

	cout<<-1;
	return 0;
}
