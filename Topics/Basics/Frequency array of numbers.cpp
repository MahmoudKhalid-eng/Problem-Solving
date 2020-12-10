#include <bits/stdc++.h>
using namespace std;
int fr[1000];
int main(){
	int n;
	int num;
	cin>>n;
	cin>>num;
	int arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		++fr[arr[i]];
	}
	cout<<fr[num];
	return 0;
}
