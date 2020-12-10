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
    int n,res=0;
    cin>>n;
    while(n>0){
        if(n%2!=0){
            res++;
        }
        n/=2;
    }
    cout<<res;
	return 0;
}
