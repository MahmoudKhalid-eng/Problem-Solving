#include<bits/stdc++.h>
int fr[100000];
using namespace std;

int main(){
	int n,max;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	max=n;
	for(int i=0;i<n;i++){
		fr[arr[i]]++;
		while(fr[max]==1){
			cout<<max<<" ";
			max--;
		}
		cout<<"\n";
	}
}
