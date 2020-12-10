#include <bits/stdc++.h> 
using namespace std;
int main(){
	set<char> ans;
	string s;
    cin>>s;
    for(int i=0;i<=s.length();i++){
    	if(s[i]>='a'&&s[i]<=s[i])
    	ans.insert(s[i]);
	}
    cout << ans.size() << endl;
		return 0;
} 
