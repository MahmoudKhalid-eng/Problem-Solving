#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q;
	set <int> st;
	cin>>n;
	cin>>p;
	int arr1[p];
	for(int i=0;i<p;i++){
		cin>>arr1[i];
		st.insert(arr1[i]);
	}
	cin>>q;
	int arr2[q];
	for(int i=0;i<q;i++){
		cin>>arr2[i];
		st.insert(arr2[i]);
	}
	
	if(st.size()==n) cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	return 0;	
	/////////////////////////////
	/*
	#include<bits/stdc++.h>
	using namespace std;
	int fr[101];
	int main(){
	int n,p,q,cnt=0;
	cin>>n;
	cin>>p;
	int arr1[p];
	for(int i=0;i<p;i++){
		cin>>arr1[i];
		fr[arr1[i]]++;
	}
	cin>>q;
	int arr2[q];
	for(int i=0;i<q;i++){
		cin>>arr2[i];
		fr[arr2[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(fr[i]>0) ++cnt;
		//cout<<i<<" : "<<fr[i]<<"\n";
	}
	if(cnt==n) cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	return 0;	
	
}
*/
}
	

