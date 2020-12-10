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
	int n;
	char x;
	set <char> st1;
	set <char> st2;
	cin>>n;
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            if(i==j||(i+j)==n-1) st1.insert(x);
            else{
                st2.insert(x);
            }
        }
	}
    if(st1.size()==1&&st2.size()==1&&st1!=st2) cout<<"YES";
    else cout<<"NO";

	return 0;
}
