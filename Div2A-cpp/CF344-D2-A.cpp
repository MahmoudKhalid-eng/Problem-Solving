#include <bits/stdc++.h>
using namespace std;
	
	int main(){
		int t;
		cin>>t;
		int number=0;
		int temp=0;
		int cnt=0;
		while(t--){
			cin>>number;
			if(number!=temp){
				cnt++;
			}
			temp =number;

		}
		cout<<cnt;
		return 0;
	}
