#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
void printTokenz(string s){
    auto pos = 0;
    string token;
    string delimiter = " ";
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        cout << token << "\n";
        s.erase(0, pos + delimiter.length());
    }
    cout<<s;
}
int main(){
	fast();
	string s;
    getline(cin,s); // I Love You
    printTokenz(s);
                        /*
                        I
                        Love
                        You
                        */
	return 0;
}
