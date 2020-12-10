#include <iostream>
using namespace std;
int main(){
	int t,cnt;
	cin>>t;
	string word;
	for(int i=0;i<t;i++){
		cin>>word;
		cnt=word.length();
		if(cnt<=10) cout<<word<<"\n";
		else{
			cout<<word[0]<<cnt-2<<word[cnt-1]<<"\n";
		}
	}
	return 0;
}
