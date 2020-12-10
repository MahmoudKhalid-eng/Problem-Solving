#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t,cnt=0;
	long long packs;
	char x;
	cin>>t>>packs;
	while(t--){
		int op;
		cin>>x>>op;
		if(x=='+'){
			packs += op;
		}
		else{
			if(packs<op) cnt++;
			else{
				packs -= op;
			}
		}
	}
	cout<<packs<<" "<<cnt;
	
	return 0;
} 
