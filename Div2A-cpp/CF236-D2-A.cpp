#include <bits/stdc++.h>
using namespace std;
	
	int fr[26];
	int main()	{
	string user_name;
	cin>>  user_name;
	int distNum =0;
	for(int i=0;i<user_name.length();i++){
		fr[user_name[i]-97]++;
	}
	for(int i=0;i<26;i++){
		if(fr[i]>=1) distNum++;
	//	cout<<fr[i]<<endl;
	}
	if(distNum%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
	return 0;
}
