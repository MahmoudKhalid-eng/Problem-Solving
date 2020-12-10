#include <bits/stdc++.h>
using namespace std;
void convert(string& s){
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	string firstString;
	cin>>firstString;
	convert(firstString);
	string secondString;
	cin>>secondString;
	convert(secondString);
	if((firstString.compare(secondString))<0) //first less than first
	{
		cout<<"-1";
	}
	else if((firstString.compare(secondString))>0) //first more than second
	{
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
