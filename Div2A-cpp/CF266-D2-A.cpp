#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=0;
	string col;
	cin>>col;
	for(int i=0;i<n;i++){
		if(col[i]==col[1+i]) cnt++;
	}	
	cout<<cnt;
	return 0;
}
