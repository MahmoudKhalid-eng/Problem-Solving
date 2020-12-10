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
	int n,k,res=0;
	string s;
	cin>>n>>k;
	while(n--){
        set <char> stt;
        cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]-'0'>=0&&s[i]-'0'<=k){
            stt.insert(s[i]-'0');
        }
    }
        if(stt.size()==k+1){
            res++;
        }
	}
    cout<<res;
	return 0;
}
