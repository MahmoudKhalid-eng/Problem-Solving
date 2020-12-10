#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int fr[3];
int main(){
	fast();
	int t,res=0;
	string s;
	cin>>t;
	while(t--){
        cin>>s;
        for(int i=0;i<s.length();i++){
            fr[s[i]-43]++;
        }
	}

    res += (fr[0]/2);
    res -= (fr[2]/2);
	cout<<res;
	return 0;
}
