#include <bits/stdc++.h>
using namespace std;
int fr[125];
int main(){
	int n,cnt=0;
	cin>>n;
    string s;
    cin>>s;
    if(n<26){
 		cout << "NO";
	 }
	else{
    for(int i=0;i<n;i++){
    	if(s[i]<='Z'&&s[i]>='A'){
    		s[i] += 32;
		}
		fr[s[i]-97]++;
	}
	
	for(int i=0;i<=27;i++){
		if(fr[i]>0){
			cnt++;
		}
	}

    if(cnt>=26) cout<<"YES";
    else cout<<"NO";
}
}
