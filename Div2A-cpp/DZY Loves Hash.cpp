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
	int n,p,t;
	cin>>p>>n;
    bool b[p]={false};
	for(int i=0;i<n;i++){
        cin>>t;
        if(b[t%p]){
            cout<<i+1;
            return 0;
        }
        else{
            b[t%p]=true;
        }

	}
	cout<<-1;
	return 0;
}
