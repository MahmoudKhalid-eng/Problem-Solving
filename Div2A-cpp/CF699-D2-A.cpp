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
	int t;
	int ans = 1e9;
	string s;
	cin>>t;
	int arr[t];
	cin>>s;
	for(int i=0;i<t;i++){
        cin>>arr[i];
	}
	for(int i=0;i<t-1;i++){
        if(s[i]=='R'&&s[i+1]=='L')
        ans = min(ans,(arr[i+1]-arr[i])/2);
	}
	if(ans==1e9) cout<<-1;
	else cout<< ans;
	return 0;
}
