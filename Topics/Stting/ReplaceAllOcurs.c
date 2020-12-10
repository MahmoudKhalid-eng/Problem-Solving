#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
void replaceALL(string s){
    size_t it;
    while((it=s.find("x"))!=string::npos){
        s.replace(it,1,"o");
    }
}
int main(){
	fast();
	string s="xxxx";
	replaceALL(s);
	cout<<s;
	return 0;
}
