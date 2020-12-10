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
	string s1,s2,left,right;
	cin>>s1>>s2;
	int sep=s1.find("|");
	left = s1.substr(0,sep); /// from the start to before the separator
	right = s1.substr(sep+1,s1.length()); /// after the separator to the end
	for(auto it : s2){
        if(left.length()<=right.length()) left += it;
        else right += it;
	}
	cout<<(left.size()==right.size() ? left+"|"+right : "Impossible");
	return 0;
}
