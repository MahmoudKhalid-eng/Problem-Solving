#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int fr[26];
int main(){
	fast();
	int n,m;
	char c;
	cin>>n>>m;
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c;
            fr[c-65]++;
        }
	}
    if(fr[2]>0||fr[12]>0||fr[24]>0) cout<<"#Color";
    else cout<<"#Black&White";
	return 0;
}
