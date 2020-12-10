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
    map <string,int> mp;
    string s;
    int t,m=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        mp[s]++;
    }
    for(auto it:mp){
        if(it.first>m)
           m=it.first;
    }
    cout<<m.second;
	return 0;
}
