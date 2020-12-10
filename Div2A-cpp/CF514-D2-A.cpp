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
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
        if(i==0 && s[i]=='9'){
            continue;
        }
        else{
            if(s[i]>'4'){
                s[i]='9'-s[i]+'0';
            }
        }
	}
	cout<<s;
    // '9' = 9+'0'
	return 0;
}
