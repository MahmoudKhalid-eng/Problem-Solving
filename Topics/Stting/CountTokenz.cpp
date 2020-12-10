#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int countTokenz(string s){
    int cnt=1;
    auto pos = 0;
    string token;
    string delimiter = " ";
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        cnt++;
        s.erase(0, pos + delimiter.length());
    }
    return cnt;
}
int main(){
	fast();
	string s;
    getline(cin,s); // I Love You
    cout<<countTokenz(s); // 3

	return 0;
}
