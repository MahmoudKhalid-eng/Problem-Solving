#include <bits/stdc++.h>
using namespace std;
	void convertlower(string& b){
	for(int i=0;i<b.length();i++){
		b[i]=tolower(b[i]);
	}
}
	void convertupper(string& m){
	for(int i=0;i<m.length();i++){
		m[i]=toupper(m[i]);
	}
}	
	int main(){
	string word;
	cin>>word;
	int up=0,lo=0;
	for(int i =0;i<word.length();i++){
		if(word[i]>=65&&word[i]<=90){
			up++;
		}
		else lo++;
	}
		if(up>lo){
			convertupper(word);
		}
		else 
		convertlower(word);
		
		cout<<word;
		return 0;
	}
