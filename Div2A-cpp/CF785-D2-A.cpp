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
	int res=0;
	int t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;
        if(s[0]=='T') {
            res+=4;
        }
        else if(s[0]=='C'){
            res+=6;
        }
        else if(s[0]=='O'){
            res+=8;
        }
        else if(s[0]=='D'){
            res+=12;
        }
        else res+=20;
	}

    cout<<res;



	return 0;
}
